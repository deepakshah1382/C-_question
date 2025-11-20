#include<iostream>
using namespace std;
main(){
int x,y,z;
cout<<"enter the numberbase,high,salant ";
cin>>x,y,z;
if ((x+y)>z and (y+z)>x and (x+z)>y)
{
    cout<<"this is triangle";
}
else{
    cout<<"this is not a triangle";
}

}
