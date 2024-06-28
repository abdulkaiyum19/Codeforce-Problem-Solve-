#include <bits/stdc++.h>
using namespace std;
int main(){
	int x = 0;
	char a;
	while(cin >> a)
        if(a == '4'||a == '7') 
            x++;
    cout << (x == 4||x == 7 ? "YES":"NO");
}