#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool canRearrange(string s) {
    int freq[26] = {0};
    for (char c : s) {
        freq[c - 'a']++;
    }
    bool allSame = true;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0 && freq[i] < s.length()) {
            allSame = false;
            break;
        }
    }

    if (allSame) {
        cout << "NO\n";
        return false;
    }

    sort(s.begin(), s.end());
    if (s[0] == s[s.length() - 1]) {
        swap(s[s.length() - 2], s[s.length() - 1]);
    }
    cout << "YES\n" << s << "\n";
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (!canRearrange(s)) {
            cout << "NO\n";
        }
    }
    return 0;
}
