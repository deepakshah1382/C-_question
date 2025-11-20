#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "enter the  1th side ";
    cin >> a;
    int b;
    cout << "enter the  2nd side ";
    cin >> b;
    int c;
    cout << "enter the  3th side ";
    cin >> c;
    if(a+b>c and b+c>a and a+c>b)
    {
        cout<<"this is the triangle";
    }
    else
    {
        cout<<"this not triangle";
    }
}
