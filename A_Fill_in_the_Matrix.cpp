#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int mex = 0;
        vector<vector<int>> matrix(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = mex++;
            }
        }

        if (mex % 2 == 0) {
            // If mex is even, swap the first two columns to increase beauty
            for (int i = 0; i < n; i++) {
                swap(matrix[i][0], matrix[i][1]);
            }
        }

        cout << mex << endl;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << matrix[i][j] + 1 << " "; // Add 1 to convert from 0-based to 1-based indexing
            }
            cout << endl;
        }
    }

    return 0;
}
