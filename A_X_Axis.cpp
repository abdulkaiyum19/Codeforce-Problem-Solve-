#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;

        int f_a1 = abs(x1 - x2) + abs(x1 - x3);
        int f_a2 = abs(x2 - x1) + abs(x2 - x3);
        int f_a3 = abs(x3 - x1) + abs(x3 - x2);

        int min_f_a = min(f_a1, min(f_a2, f_a3));

        cout << min_f_a << endl;
    }

    return 0;
}
