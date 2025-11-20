#include<iostream>
using namespace std;
 int main(){
int n;
cout<<"enter the number";
cin>>n;
int sum=0;
while(n!=0){
    
int last=n%10;
n=n/10;
if(last%2==0)
sum=sum+last;
}

cout<<sum;

 }