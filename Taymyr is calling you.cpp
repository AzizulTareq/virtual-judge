#include <iostream>

using namespace std;

int main()
{
   int sum,n,m,count=0;
   int z;

   cin>>n>>m>>z;
   for(int i=1;;i++)
   {
       sum=m*i;
       if(sum>z)
        break;
       if(sum%n==0)
       {
           count++;
       }

   }
   cout<<count;

}
