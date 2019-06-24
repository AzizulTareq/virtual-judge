#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    int sum = 0;

    for(int i=0; i<(sizeof(arr)/sizeof(*arr)); i++){
        cin>>arr[i];

    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<(arr[n-1]*n-sum)<<endl;

}
