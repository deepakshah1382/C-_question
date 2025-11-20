#include <iostream>
using namespace std;
int main()
{
    int no1;
    cout << "enter the numberno1";
    cin >> no1;
    char op;
    cout << "enter the optreater sing";
    cin >> op;
    int no2;
    cout << "enter the numberno2";
    cin >> no2;
    switch (op)
    {
    case '+':
    {
        cout << no1 + no2 << "this addtionl"<<endl;
        
    }
    break;
    case '-':
    {
        cout << no1 - no2 << "this subtrcation"<<endl;
        
    }
    break;
    case '*':
    {
        cout << no1 * no2 << "this mulitply"<<endl;
        
    }
break;
    case '/':
    {
        cout << no1 / no2 << "this division"<<endl
        ;
    }
    break;
    default:
        cout << "this option is not avilble";
        break;
    }
}
