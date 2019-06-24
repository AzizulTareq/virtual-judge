#include <iostream>

using namespace std;

int main(){

    int T;
    cin>>T;

    for(int i=0; i<T; i++){

    int N, a, sum = 0;
    cin>>N;

    while(N != 0){
        a = N%10;
        sum = sum + a;
        N = N/10;
    }
    cout<<sum<<endl;
    }


}
