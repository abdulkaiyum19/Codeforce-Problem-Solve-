#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, q;
        cin >> n >> a >> q;

        string notifications;
        cin >> notifications;

        int subscribers_online = a;
        int min_online = a;
        int max_online = a;

        for (char c : notifications) {
            if (c == '+') {
                subscribers_online++;
            } else {
                subscribers_online--;
            }

            min_online = min(min_online, subscribers_online);
            max_online = max(max_online, subscribers_online);
        }

        if (max_online >= n || min_online <= 0) {
            cout << "YES" << endl;
        } else if (max_online >= n - 1 && notifications[q - 1] == '+') {
            cout << "YES" << endl;
        } else {
            cout << "MAYBE" << endl;
        }
    }

    return 0;
}
