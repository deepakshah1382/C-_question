#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number :";
    cin >> n;
    do
    {
        if (n % 2 == 0)
            cout << "this is even number" << n << endl;
            else
            cout<<"this odd number";

    } while (n <= 100);
    
}
