#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            a[i] %= 2;  // Convert each element to 0 (even) or 1 (odd)
        }

        int count_zero = count(a.begin(), a.end(), 0);
        int count_one = n - count_zero;

        int ans = (count_zero * (count_zero - 1)) / 2 + (count_one * (count_one - 1)) / 2;
        cout << ans << endl;
    }

    return 0;
}
