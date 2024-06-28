#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        int weight;
        int count_1_gram = 0;
        int count_2_gram = 0;

        for (int j = 0; j < n; ++j) {
            cin >> weight;
            if (weight == 1) {
                count_1_gram++;
            } else {
                count_2_gram++;
            }
        }

        if (count_1_gram % 2 == 0 && (count_2_gram % 2 == 0 || count_1_gram >= 2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
