#include <iostream>
using namespace std;
void main() {
	cout << "Size of array: ";
	int n;//fdsrgrgrg
	cin >> n;
	int sum = 0;
	int proizv = 0;
	int* a = new int[n];
	cout << "What do you want to do with array (*/+)";
	char c;
	cin >> c;
	for (int i = 1; i < n; i++){
		switch (c){
		case '+':
			a[i] = i + i;
			sum += a[i];
			break;
		case '*':
			a[i] = i * i;
			proizv += i;
			break;}}

	if (sum > 0) {
		cout << "Sum: " << sum << endl;}
	if (proizv > 0) {
		cout << "Proizv: " << proizv << endl;}
	/*fgdfgdfgdffhgdfgdgfd
gfdfgdfgdfgdgfdfgdfgdfgdfgdfgdfgdfgfdg
dfgdfgdfgdgdgfdfg*/
	cout << "\n";
	system("pause");}