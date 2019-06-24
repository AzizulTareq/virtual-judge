#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){

    string str1;
    while(cin>>str1){
        string str2 = "";
        for(int i=0; i<str1.length(); i++)
        str2 += str1[i]-7;
        cout<<str2<<endl;
    }
}
