#include <iostream>

using namespace std;

int main(){
    int T;
    cin>>T;

    for(int i=0; i<T; i++){
    int N, sum = 1;
    cin>>N;

    for(int i=1; i<=N; i++){
        sum *= i;
    }
    cout<<sum<<endl;
    }



}
