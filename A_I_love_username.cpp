#include <iostream>
using namespace std;
int main ()
{
    int n,counter = 0;
    cin >> n;

    int arr[n];
    for (int i = 0; i <= n; i++){
        cin >> arr [i];
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
            counter ++;
        }
        if(arr [i] < min){
            min = arr[i];
            counter ++ ;
        }
    }
    cout << counter << endl;

    return 0;
}