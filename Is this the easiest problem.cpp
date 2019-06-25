#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t)
    {
        long long a, b, c;

        cin>>a>>b>>c;

        cout<<"Case "<< t << ": ";

        if (a <= 0 || b <= 0 || c <= 0)
            cout<<"Invalid";

        else if (a + b <= c || a + c <= b || b + c <= a)
            cout<<"Invalid";

        else if (a == b && b == c)
            cout<<"Equilateral";

        else if (a == b || a == c || b == c)
            cout<<"Isosceles";

        else
            cout<<"Scalene";

        cout<<endl;
    }

}
