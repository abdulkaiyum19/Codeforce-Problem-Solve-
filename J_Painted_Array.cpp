#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n;
        
        int red[100], blue[100]; 

        for (int i = 0; i < n; ++i) {
            cin >> red[i];
        }

        cin >> m;

        for (int i = 0; i < m; ++i) {
            cin >> blue[i];
        }

        int max_sum = 0;
        int current_sum = 0;

        int combined[200];
        int i = 0, j = 0, idx = 0;
        while (i < n && j < m) {
            combined[idx++] = red[i++];
            combined[idx++] = blue[j++];
        }
        while (i < n) {
            combined[idx++] = red[i++];
        }
        while (j < m) {
            combined[idx++] = blue[j++];
        }

        for (int k = 0; k < n + m; ++k) {
            int num = combined[k];
            current_sum = max(num, current_sum + num);
            max_sum = max(max_sum, current_sum);
        }

        cout << max_sum << endl;
    }

    return 0;
}
