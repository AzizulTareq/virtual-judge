#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;

    for(int i=0; i<T; i++){
        int A, B, C;
        cin>>A>>B>>C;

        if(A>=B && A<C || A<B && A>=C)
        {
            cout<<A<<endl;
        }
        else if(B>=A && B<C || B>=C && B<A)
        {
            cout<<B<<endl;
        }
        else{
            cout<<C<<endl;
        }

    }



    return 0;
}
