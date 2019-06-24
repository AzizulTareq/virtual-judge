#include<iostream>
 using namespace std;
 int main()
 {
     int n;

     cin>>n;

     int num1,num2,num3,x=0,y=0,z=0;
     for (int i=0; i<n; i++)
     {
         cin>>num1>>num2>>num3;

         x=x+num1;
         y=y+num2;
         z=z+num3;
     }


     if( x==0 && y==0 && z==0)
     {
         cout<<"YES"<<endl;
     }
     else
     {
         cout<<"NO"<<endl;
     }


     return 0;

 }
