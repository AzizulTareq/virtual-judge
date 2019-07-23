#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int Ar[n];

	for (int i = 0; i < n; i++) {
		cin >> Ar[i];
		Ar[i] = Ar[i] % 2;
	}
	int a = count(Ar, Ar + n, 1);
	if (a > n - a) {
		for (int i = 0; i < n; i++) {
			if (!Ar[i]) {
				cout << i + 1;
				break;
			}
		}
	} else {
		for (int i = 0; i < n; i++) {
			if (Ar[i]) {
				cout << i + 1;
				break;
			}
		}
	}
	return 0;
}
