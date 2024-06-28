#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

// Function to precompute the time it takes to reach each signpost
vector<int> precomputeTime(const vector<int>& signs, const vector<int>& times) {
    vector<int> timeToSigns;
    for (int i = 0; i < signs.size(); ++i) {
        timeToSigns.push_back((signs[i] - i > 0) ? times[i] : -1);
    }
    return timeToSigns;
}

// Function to find the time it takes to reach a specific point between two signposts
int findTime(int query, const vector<int>& signs, const vector<int>& timeToSigns) {
    int pos = lower_bound(signs.begin(), signs.end(), query) - signs.begin();
    if (pos == 0) return query; // Car hasn't reached the first signpost yet
    if (pos == signs.size()) return timeToSigns.back(); // Car has passed all signposts
    return timeToSigns[pos - 1] + query - signs[pos - 1];
}

int main() {
    // Read the number of test cases
    int t;
    cin >> t;

    // Iterate through each test case
    for (int i = 0; i < t; ++i) {
        int destination, num_signs, num_queries;
        cin >> destination >> num_signs >> num_queries;

        vector<int> signs(num_signs);
        for (int j = 0; j < num_signs; ++j) {
            cin >> signs[j];
        }

        vector<int> times(num_signs);
        for (int j = 0; j < num_signs; ++j) {
            cin >> times[j];
        }

        vector<int> timeToSigns = precomputeTime(signs, times);

        // Answer each query
        for (int j = 0; j < num_queries; ++j) {
            int query;
            cin >> query;
            cout << findTime(query, signs, timeToSigns) << " ";
        }
        cout << endl;
    }

    return 0;
}
