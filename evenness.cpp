#include <iostream>
#include <iterator>

using namespace std;

int main()
{
     int n, even;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
            cin>>arr[i];
        if(arr[i] % 2 != 0){
            even = i;
        }
        int arrayy[even];
   if(sizeof(arrayy) == 1){
    cout<<arrayy[i];
   }
    }




}
