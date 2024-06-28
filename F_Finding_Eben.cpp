#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        unordered_map<int, int> freq;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            freq[a[i] % 2]++;
        }

        long long ans = 0;
        for (auto it = freq.begin(); it != freq.end(); ++it) {
            ans += (it->second * (it->second - 1)) / 2;
            if (it->first % 2 == 0) {
                ans += it->second * freq[it->first / 2];
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
