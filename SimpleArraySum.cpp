#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];



    if(0<n)
    {
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        sum += ar[i];
    }
        cout<<sum;
    }
}
