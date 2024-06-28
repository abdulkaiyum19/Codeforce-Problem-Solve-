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
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        if (sum % n != 0) {
            cout << "No" << endl;
        } else {
            long long target = sum / n;
            bool possible = true;

            for (int i = 0; i < n; i++) {
                if (a[i] > target) {
                    possible = false;
                    break;
                }
            }

            cout << (possible ? "Yes" : "No") << endl;
        }
    }

    return 0;
}
