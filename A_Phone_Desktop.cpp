#include <iostream>
#include <vector>
using namespace std;

int calculate_min_screens(int x, int y) {
    int screens_needed = 0;
    const int screen_cells = 5 * 3;

    // Each 2x2 icon occupies 4 cells
    // Each screen can hold up to 3 such 2x2 icons because 3*4 = 12 < 15 (screen capacity)
    while (y > 0) {
        screens_needed++;
        int icons_in_this_screen = min(y, 3); // max 3 icons per screen
        y -= icons_in_this_screen;
        x -= max(0, screen_cells - icons_in_this_screen * 4); // remaining space for 1x1 icons
    }

    // Remaining 1x1 icons
    if (x > 0) {
        screens_needed += (x + screen_cells - 1) / screen_cells; // ceiling division
    }

    return screens_needed;
}

int main() {
    int t;
    cin >> t;

    vector<int> results;
    for (int i = 0; i < t; ++i) {
        int x, y;
        cin >> x >> y;
        results.push_back(calculate_min_screens(x, y));
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}