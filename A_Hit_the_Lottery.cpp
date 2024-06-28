#include<bits/stdc++.h>
using namespace std;
int main (){
    int a;
    cin >> a;

    int result = a / 100;
    int left = a % 100;

    result += left / 20;
    left = left % 20;

    result += left / 10;
    left = left % 10;

    result += left / 5;
    left = left % 5;

    result += left / 1;

    cout << result;

    return 0;
}