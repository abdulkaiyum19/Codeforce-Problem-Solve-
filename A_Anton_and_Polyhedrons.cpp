//in the name of God, Most Gracious, Most Merciful
// Free Palestine
#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;

    int count = 0;
    while (n--)
    {
        string s;
        cin >> s;

        if(s == "Tetrahedron"){
            count+=4;
        }
        else if(s == "Cube"){
            count+=6;
        }
        else if(s == "Octahedron"){
            count+=8;
        }
        else if(s == "Dodecahedron"){
            count+=12;
        }
        else if (s == "Icosahedron"){
            count += 20;
        }

    }
    cout << count << endl;
    return 0;
}