#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        string sorted_s = s;
        sort(sorted_s.begin(), sorted_s.end());

        int ans = n;

        for (int i = 1; i < n; ++i) {
            int cnt = 0;
            for (int j = 0; j < n; ++j) {
                if (s[j] != sorted_s[j]) {
                    cnt++;
                }
            }
            ans = min(ans, cnt);
            rotate(s.begin(), s.begin() + 1, s.end()); 
        }

        cout << ans << "\n";
    }

    return 0;
}
