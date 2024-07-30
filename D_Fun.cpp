#include <iostream>
#include <algorithm>

using namespace std;

long long countTriplets(int n, int x) {
    long long count = 0;

    for (int a = 1; a <= x; ++a) {
        for (int b = 1; b <= x; ++b) {
            // Calculate the maximum possible c given a and b
            int max_c_from_n = (n - a * b) / (a + b);
            int max_c_from_x = x - a - b;
            int max_c = min(max_c_from_n, max_c_from_x);
            
            if (max_c >= 1) {
                count += max_c; // All c from 1 to max_c are valid
            }
        }
    }

    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        cout << countTriplets(n, x) << '\n';
    }

    return 0;
}
