#include <iostream>

using namespace std;

int main()
{
    int T;
    int a, b, c;
    int count = 0;
    cin>>T;
while(T<20 && T--)
{
    count++;
    cin>>a;
    cin>>b;
    cin>>c;

    if(1000<=a<=10000 && 1000<=b<=10000 && 1000<=c<=10000 && a>b && a<c)
    {
        cout<<"Case "<<count<<": "<<a<<endl;
    }
    else if(1000<=a<=10000 && 1000<=b<=10000 && 1000<=c<=10000 && a<b && b<c)
    {
        cout<<"Case "<<count<<": "<<b<<endl;
    }
    else
    {
        cout<<"Case "<<count<<": "<<c<<endl;
    }
}
}
