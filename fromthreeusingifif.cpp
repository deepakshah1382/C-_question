#include<iostream>
using namespace std;
main()
{
int a;
cout<<"enter the number a";
cin>>a;
int b;
cout<<"enter the number b";
cin>>b;
int c;
cout<<"enter the number c";
cin>>c;
if(a>b){
    if(a>c)
    cout<<"a is grater number";
    else{
        cout<<"c is grater";
    }

}
if(b>a){
    if(b>c)
    cout<<"b is greater number";
    else{
    cout<<"c is grater number";
    }
}


}