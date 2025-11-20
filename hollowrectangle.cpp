#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the number";
cin>>n;

for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
        if(i==1 || i==6|| j==1||j==6)
        cout<<"* ";
        else
        cout<<" ";

    }

cout<<endl;

}

}