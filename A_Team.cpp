#include <iostream>
using namespace std;

int main ()
{
    int n, x, y, z;

    cin >> n;
int totalCount = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> x >> y >> z;
        
        if(x + y + z >= 2)
        {
           totalCount++;
        }

    }
    cout << totalCount << endl;

    return 0;
}
