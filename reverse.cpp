#include <iostream>

using namespace std;
int  main()
{
    int T;
    cin>>T;

    for(int i=0; i<T; i++){

        	int N, sum=0, num;
	cin>>N;
	while(N!=0)
	{
		num=N%10;
		sum=sum*10+num;
		N=N/10;
	}
	cout<<sum<<endl;

    }

}
