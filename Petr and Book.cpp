#include <iostream>
using namespace std;
int main()
{
    int n, arr[10], i;
    cin>>n;
    for(i=0; i<7; i++){
        cin>>arr[i];
    }
    for(i=0; i<7; i++){
        n-=arr[i];
        if(n<=0){
            cout<<i+1<<endl;
            break;
        }
        if(i==6)
            i=-1;
    }
    return 0;
}
