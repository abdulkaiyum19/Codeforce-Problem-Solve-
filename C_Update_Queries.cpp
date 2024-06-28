#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, m;
        cin >> n >> m; // Length of string and number of updates

        string s;
        cin >> s; // Input string

        vector<int> ind(m);
        for (int i = 0; i < m; ++i) {
            cin >> ind[i];
        }

        string c;
        cin >> c; // Input string c

        vector<char> result(n, 'z'); // Initialize result array

        for (int i = 0; i < m; ++i) {
            result[ind[i] - 1] = min(result[ind[i] - 1], c[i]);
        }

        // Construct the resulting string
        string final_result;
        for (char ch : result) {
            final_result += ch;
        }

        cout << final_result << endl;
    }

    return 0;
}
