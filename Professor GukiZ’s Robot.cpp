#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
int x1,y1,x2,y2,sum1=0,sum2=0;
cin>>x1>>y1>>x2>>y2;
sum1=abs(x1-x2);
sum2=abs(y1-y2);
if(sum1>=sum2){
    cout<<sum1;
}else{
    cout<<sum2;

}
}
