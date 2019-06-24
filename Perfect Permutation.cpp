#include <iostream>
#define Vai_NSU_PS_e_Chance_den int main (void)

using namespace std;

Vai_NSU_PS_e_Chance_den
{
    int n;
    cin >> n;
    if (n % 2 == 1)
        cout << -1 << endl;
    else
    {
        cout << "2 1";
        for (int i = 3; i < n; i += 2)
        {
            cout << " " << i + 1 << " " << i;
        }
        cout << endl;
    }
    return 0;
}
