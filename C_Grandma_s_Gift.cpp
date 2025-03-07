#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[50];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int happy = true;
        for (int i = 1; i < n; ++i) {
            if (a[i] - a[i - 1] > 1) {
                happy = false;
                break;
            }
        }

        if (happy) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
