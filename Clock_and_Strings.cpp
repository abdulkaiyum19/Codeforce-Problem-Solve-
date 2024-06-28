#include <iostream>
using namespace std;

bool intersect(int a, int b, int c, int d) {
    if ((a > c && a > d && b < c && b < d) || (a < c && a < d && b > c && b > d))
        return true;
    return false;
}

int main() {
    // Read the number of test cases
    int t;
    cin >> t;

    // Iterate through each test case
    for (int i = 0; i < t; ++i) {
        // Read the four distinct integers
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        // Check if the strings intersect
        if (intersect(a, b, c, d))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
