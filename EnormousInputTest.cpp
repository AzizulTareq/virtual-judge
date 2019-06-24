#include <iostream>

using namespace std;

int main(){

    int n, k;
    cin>>n>>k;
    int count = 0;

    int arr[n];

    for(int i=0; i<(sizeof(arr)/sizeof(*arr)); i++){
        cin>>arr[i];

        if(arr[i] % k == 0 ){
            count++;
        }
    }
    cout<<count;


}
