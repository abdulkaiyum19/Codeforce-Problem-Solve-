//IN THE NAME OF ALLAH 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = 1; true; i++)
    {
        int res = (a * i) % 10;
        if (res == 0 || res == b)
        {
            cout << i << endl;
            break;
        }
    }
}