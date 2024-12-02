#include <iostream>
#include <time.h>
#include <cmath>
#include <fstream>
using namespace std;

void bininc(string znaki[], int N) {
	int i = N - 2;
	while (i >= 0 && znaki[i] == 1) {
		znaki[i] = 0;
		i--;
	}
	if (i >= 0) {
		znaki[i] = 1;
	}
}

int main() {
	int N, num, k, o;
	o = 0;
	cout << "A="; cin >> k;
	cout << "N="; cin >> N;
	ofstream file("input.txt");
	cout << "Enter " << N << " natural numbers separating with enter:" << endl;
	for (int i = 0; i < N; ++i) {
		cin >> num;
		file << num << endl;
	}

	file.close();
	ifstream f("input.txt");
	int* numbers = new int[N];
	for (int i = 0; i < N; i++) {
		f >> numbers[i];
	}
	f.close();
	ofstream fo("output.txt");
	int* znaki = new int[N - 1];
	for (int i = 0; i < N - 1; i++) {
		znaki[i] = 0;
	}
	for (int t = 0; t<int(pow(2, N - 1)); t++) {
		int sum = numbers[0];
		for (int i = 1; i < N; i++) {
			if (znaki[i - 1] == 0) sum -= numbers[i];
			if (znaki[i - 1] == 1) sum += numbers[i];
			if (sum == k && i == N - 1) {
				o++;
				fo << numbers[0];
				for (int j = 1; j < N; j++) {
					if (znaki[j - 1] == 0) fo << "-";
					else fo << "+";
					fo << numbers[j];
				}
				fo << endl;
			}
		}
		bininc(znaki, N);
	}
	fo << o;
	fo.close();
