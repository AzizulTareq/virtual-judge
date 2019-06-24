#include <iostream>
using namespace std;

int main()
{
    int T;
    int A[10001];
    cin>>T;

    while (T--)
    {
        int a,b;
        int m1 = 0;
        int c = 0;
        cin>>a;

        for (int i =0;i<10001;i++)
        {
            A[i] = {0};
        }

        for (int i =0;i<a;i++)
        {
            cin>>b;
            A[b]++;
        }

        for (int i =0;i<10001;i++)
        {
            if (A[i]>m1)
            {
                m1 = A[i];
                c = i;
            }
        }

        cout<<c<<" " <<m1<<endl;

    }
}
