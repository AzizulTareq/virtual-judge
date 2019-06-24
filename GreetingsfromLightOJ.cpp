#include <iostream>

using namespace std;

int main()
{

	int T;
	int a;
	int b;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		cin >> a;
		cin >> b;

		a = a + b;
		cout <<"Case "<<i<<": "<< a << endl;
	}

}
