#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	cin>>N;
	int a[N];

	for(int i=0;i<N;i++)
	{
	    cin>>a[i];
	}

    sort(a,a+N);
	cout<<a[0]+a[1]<<"\n";
	}
	return 0;
}
