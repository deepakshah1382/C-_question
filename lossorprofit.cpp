#include <iostream>
using namespace std;
main()
{
    int cp;
    cout << "enter the cost price";
    cin >> cp;
    int sp;
    cout << "enter the selling price";
    cin >> sp;
    if (cp > sp)
    {
        cout << "cost price is more" << cp - sp;
    }
    else if (cp < sp)
    {
        cout << "selling price is more" << sp - cp;
    }
    else
    (cp == sp)
    
            cout << "not";
}

