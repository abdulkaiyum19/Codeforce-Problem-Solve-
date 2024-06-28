//in the name of God, Most Gracious, Most Merciful
// Free Palestine
#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n ;

    int m[n];
    int police = 0;
    int crime = 0;

    for(int i = 0; i < n; i++){
        cin >> m[i];
    if(m[i]==-1){
        if(police == 0){
            crime ++;
        }
        else{
            police --;
        }
    }
    else{
        police = police + m[i];
    }
    }
    cout << crime << endl;
    return 0;
}