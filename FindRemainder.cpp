#include <iostream>

using namespace std;

int main(){
    int T, A, B;
    cin>>T;

    for(int i=0; i<T; i++){
    cin>>A>>B;

    int sum = 0;
    sum = A%B;
    cout<<sum<<endl;
    }

}
