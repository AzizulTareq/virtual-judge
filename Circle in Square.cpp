#include <iostream>
#include <iomanip>
#include <math.h>
#define PI 2*acos(0.0)
using namespace std;

int main(){
    int count = 0;

    double r;
    double areaOfCircle=0, areaOfSquare=0, sum=0;

    int T;
    cin>>T;

    for(int i=1; i<=T; i++){

    cin>>r;

    areaOfCircle =  2*acos(0.0)* (r*r);
    areaOfSquare = (r+r)*(r+r);

    sum = areaOfSquare - areaOfCircle;
    count++;
    cout<<fixed<<setprecision(2)<<"Case"<<" "<<count<<": "<<sum<<endl;
    }


}
