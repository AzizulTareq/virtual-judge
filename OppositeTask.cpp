#include <iostream>

using namespace std;

int main()
{
    int T,n;
    cin>>T;

    while(T--){
    cin>>n;
    if(n>10){
        cout<<n-10<<" "<<n-(n-10)<<endl;
    }
    else{
        cout<<0<<" "<<n<<endl;
    }
   }
  }

