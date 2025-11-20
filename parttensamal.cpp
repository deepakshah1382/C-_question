#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the number";
cin>>n;
for(int i=97; i<=n; i++)
{
for(int j=97; j<=n; j++){
//cout<<(char)i<<" ";// a aaa
// this for a b c d
cout<<(char)j<<" ";
}
cout<<endl;
cout<<endl;
}
}