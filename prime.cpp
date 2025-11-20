#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    bool flag = true ;// this meas primer number
        for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {

            flag = false ;
            break;
        }
    }
    
    if (flag == true)
    cout << "this prime number";
    else
        cout << "composite number";
}