#include <iostream>
#include <string>

using namespace std;

bool isAlphabetical(const string& s) {
    char expected = 'a';
    for (char c : s) {
        if (c == expected) {
            expected++;
        } else if (c > expected) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        if (isAlphabetical(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
