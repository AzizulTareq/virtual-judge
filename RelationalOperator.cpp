#include <iostream>

using namespace std;

int main()
{
    int t;
    int a, b;
    cin>>t;

while(t--)
{
    cin>>a;
    cin>>b;
    if(a>b)
        cout<<">"<<endl;
    else if(a<b)
        cout<<"<"<<endl;
    else
        cout<<"="<<endl;
}
}
