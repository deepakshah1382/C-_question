#include<iostream>
using namespace std;
 int main(){
int n;
cout<<"enter the number";
cin>>n;
int r=0;
while(n!=0){
int last=n%10;
n=n/10;
r=r*10;
r=r+last;
}

cout<<r;

 }