#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string a, b;
        cin >> a >> b;

        int k = 0;
        int j = 0;

        // Iterate through both strings
        for (int i = 0; i < m && j < n; ++i) {
            // If current characters match, move to next character in a
            if (a[j] == b[i]) {
                ++j;
                ++k;
            }
        }

        cout << k << endl;
    }

    return 0;
}
