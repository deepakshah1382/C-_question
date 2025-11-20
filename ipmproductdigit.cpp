#include<iostream>
using namespace std;
 int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int pro=1;
    while (n>0)
    {
    int last=n%10;
    n=n/10;
    pro=pro*last;
    }
    cout<<pro;
 }

