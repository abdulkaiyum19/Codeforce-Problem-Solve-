#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calculatePower(int l, int r, const vector<int>& a) {
    int power = 0;
    for (int i = l; i < r; ++i) {
        power += abs(a[i] - 2 * a[i + 1]);
    }
    return power;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int ans = 1e9; // Initialize with a large value

        for (int i = 0; i <= n - k; ++i) {
            for (int j = i + k - 1; j < n; ++j) {
                ans = min(ans, calculatePower(i, j, a));
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
