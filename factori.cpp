#include<iostream>
using namespace std;
main()
{
int x;
cout<<"enter the number";
cin>>x;
int a=1;
for ( int i=1; i<x; i++){
if(x%i==0)
a=i;
}
cout<<a;
}