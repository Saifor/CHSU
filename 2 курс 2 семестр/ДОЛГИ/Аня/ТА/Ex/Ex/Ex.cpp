#include <cstdlib> 
#include <stdlib.h> 
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    const int n=5;
    int i;
    int a[n] = {};
    cout << "Insert number (1-3): ";
    cin >> i;
    switch (i) {
    case 1: {
        for (int i = 0; i < n; i++) {
            a[i] = rand()%10+1;
            cout << a[i] << " ";
        }
    }
    case 2: {
        for (int i = 0; i < n; i++) {
            cout << "Amounts of element #" << i << ": " << endl;
            cin >> a[i];
        }
        cout << "Your array is: ";
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    }
}
