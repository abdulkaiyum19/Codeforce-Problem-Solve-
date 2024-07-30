//IN THE NAME OF ALLAH 
#include <bits/stdc++.h>
using namespace std;

int main (){
    int t; 
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if(a + b == c){
            cout << "+" << endl;
        }
        else if(a - b == c || b - a == c){
            cout << "-" << endl;
        }
    }
    
}