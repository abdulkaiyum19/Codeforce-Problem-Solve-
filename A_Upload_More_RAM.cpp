#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int full_intervals = n / k;
        int remaining_ram = n - full_intervals * k;
        int total_seconds = full_intervals + (remaining_ram > 0);
        cout << total_seconds << endl;
    }
    return 0;
}
