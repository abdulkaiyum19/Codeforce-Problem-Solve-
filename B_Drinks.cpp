#include <iostream>
using namespace std;

int main ()
{
    int n, sum = 0;
    double avg = 0;

    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    
    avg = (double)sum / n;
    
     cout << avg << endl;

    return 0;
}