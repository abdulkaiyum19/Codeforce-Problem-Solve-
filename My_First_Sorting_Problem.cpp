//in the name of God, Most Gracious, Most Merciful.
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int num_test_cases;
    cin >> num_test_cases;

    for (int i = 0; i < num_test_cases; ++i) {
       
        int a, b;
        cin >> a >> b;

        cout << min(a, b) << " " << max(a, b) << endl;
    }

    return 0;
}
