#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> minCards(int t, vector<pair<int, pair<int, vector<int>>>> testCases) {
    vector<int> results;
    for (int i = 0; i < t; ++i) {
        int n = testCases[i].first;
        int k = testCases[i].second.first;
        vector<int> cards = testCases[i].second.second;

        unordered_map<int, int> freq;
        for (int card : cards) {
            freq[card]++;
        }

        int totalGroups = 0;
        for (auto& entry : freq) {
            totalGroups += entry.second / k;
        }

        results.push_back(totalGroups);
    }
    return results;
}

int main() {
    int t;
    cin >> t;

    vector<pair<int, pair<int, vector<int>>>> testCases;
    for (int i = 0; i < t; ++i) {
        int n, k;
        cin >> n >> k;
        vector<int> cards(n);
        for (int j = 0; j < n; ++j) {
            cin >> cards[j];
        }
        testCases.push_back({n, {k, cards}});
    }

    vector<int> result = minCards(t, testCases);
    for (int res : result) {
        cout << res << endl;
    }

    return 0;
}
