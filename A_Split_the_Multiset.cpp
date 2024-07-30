#include <iostream>
using namespace std;

// Function to compute the multinomial coefficient
long long computeMultinomial(int n, int k) {
    long long result = 1;
    for (int i = 1; i <= k; ++i) {
        result *= (n - i + 1);
        result /= i;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        long long ans = computeMultinomial(n + k - 1, k - 1) - 1;
        cout << ans << "\n";
    }
    return 0;
}
