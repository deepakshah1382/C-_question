#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the numcin";
    cin >> n;
    for (int i = 65; i <= n; i++)
    {
        for (int j = 65; j <= n - i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}