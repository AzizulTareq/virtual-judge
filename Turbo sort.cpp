#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int numArr[t];
    for (int i = 0; i < t; i++) {
        cin >> numArr[i];
    }
    sort(numArr, numArr + t);
    for (int i = 0; i < t; i++) {
        cout << numArr[i] << "\n";
    }
    return 0;
}
