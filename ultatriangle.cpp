#include<iostream>
using namespace std;
int main(){
int n;
cout<<"entr tne row";
cin>>n;
for(int i=65; i<=n; i++){
for(int j=65; j<=n-i+1; j++){

cout<<(char)(j)<<"*";

}
cout<<endl;
}

}








