#include <iostream>
#include <vector>
using namespace std;

bool canTransform(vector<vector<int>>& a, vector<vector<int>>& b, int n, int m) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            while (a[i][j] != b[i][j]) {
                // Apply the operation on the 2x2 subrectangle
                a[i][j] = (a[i][j] + 1) % 3;
                a[i + 1][j] = (a[i + 1][j] + 1) % 3;
                a[i][j + 1] = (a[i][j + 1] + 2) % 3;
                a[i + 1][j + 1] = (a[i + 1][j + 1] + 2) % 3;
            }
        }
    }

    // Check the last row and last column
    for (int i = 0; i < n; ++i) {
        if (a[i][m - 1] != b[i][m - 1]) {
            return false;
        }
    }
    for (int j = 0; j < m; ++j) {
        if (a[n - 1][j] != b[n - 1][j]) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        vector<vector<int>> b(n, vector<int>(m));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                char ch;
                cin >> ch;
                a[i][j] = ch - '0';
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                char ch;
                cin >> ch;
                b[i][j] = ch - '0';
            }
        }

        if (canTransform(a, b, n, m)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
