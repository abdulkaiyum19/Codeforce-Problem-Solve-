#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        long long totalCoins = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[i - 1]) {
                // The number of increments required to make a[i] at least a[i - 1]
                int diff = a[i - 1] - a[i];
                // The cost is the difference (number of increments) itself
                totalCoins += diff;
                // Make the current element equal to the previous element
                a[i] = a[i - 1];
            }
        }

        cout << totalCoins << endl;
    }

    return 0;
}
