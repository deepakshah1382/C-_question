#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    for (int i = 65; i <= n; i++)
    {
        // for (int j = 65; j <=i; j++)
        // {
        //    // cout <<(char)(j);
        // }
        int j;
       for (int  j = 65; j<= n - 1; j++)
        {
            cout << (char)j;
        }
        cout << endl;
    }
}
