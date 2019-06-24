#include <iostream>
using namespace std;
int main()
{
    int num, n, m;
    while (cin >> n >> m)
    {
        if (m > n)
            num = -1;
        else
        {
            if (n % 2 == 0)
                num = n / 2;
            else
                num = (n / 2) + 1;
            while (num%m != 0)
            {
                num++;
            }
        }

        cout << num;
    }

    return 0;
}
