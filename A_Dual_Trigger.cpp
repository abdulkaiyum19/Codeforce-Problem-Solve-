#include <iostream>
#include <string>

using namespace std;

bool can_reach_configuration(int n, string s) {
    // Check if the configuration consists of all 0s or all 1s
    if (s.find('0') == string::npos || s.find('1') == string::npos)
        return true;

    // Check if there's a sequence of 3 or more 0s or 1s
    if (s.find("000") != string::npos || s.find("111") != string::npos)
        return false;

    // If n is even, check if there's an alternating pattern of 01 or 10
    if (n % 2 == 0) {
        if (s.find("01") != string::npos || s.find("10") != string::npos)
            return true;
        else
            return false;
    }

    // If n is odd, check if there's an alternating pattern of 01 or 10
    // except for the first or last character
    if (s.substr(1).find("01") != string::npos || s.substr(1).find("10") != string::npos)
        return true;
    else
        return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (can_reach_configuration(n, s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
