//in the name of God, Most Gracious, Most Merciful.

#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;

int main (){
    string a,b;
    cin >> a >> b;

    reverse(a.begin(), a.end());

    if(a == b){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}