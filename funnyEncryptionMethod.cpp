#include <iostream>

using namespace std;

int func(int N)
{
    int count = 0;

    while (N)
    {
        count += N & 1;
        N >>= 1;
    }

    return count;
}

int main()
{
    int T;
    cin >> T;
    for(int i=0; i<T; i++)
    {
        int N;
        cin >> N;
        int decimal = func(N);
        int hexa = 0;

        while (N)
        {
            hexa += func(N % 10);
            N/= 10;
        }

        cout << decimal <<' '<< hexa <<endl;
}
}
