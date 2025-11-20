#include <iostream>
using namespace std;
main()
{
    int l;
    cout << "enter the values of lenght";
    cin >> l;
    int b;
    cout << "enter the values of breather";
    cin >> b;
    int area = l * b;
    cout << " area is this rectangle \n"
         << area;
    int pera = 2 * (l + b);
    cout << "area of the perimerter " << pera;
    if (area > pera)
    {
        cout << "area of rectangle is grater";
    }
   
}