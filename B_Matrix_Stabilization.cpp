#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

// Custom comparator for the priority queue to create a max-heap
struct Compare {
    bool operator()(const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
        return get<0>(a) < get<0>(b); // Compare by value
    }
};

void stabilizeMatrix(vector<vector<int>>& matrix, int n, int m) {
    // Priority queue to store matrix elements along with their positions
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, Compare> pq;

    // Insert all elements into the priority queue
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            pq.emplace(matrix[i][j], i, j);
        }
    }

    // Directions for neighbors (up, down, left, right)
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    while (!pq.empty()) {
        auto [value, i, j] = pq.top();
        pq.pop();

        bool isPeak = true;

        for (auto [di, dj] : directions) {
            int ni = i + di, nj = j + dj;
            if (ni >= 0 && ni < n && nj >= 0 && nj < m && matrix[ni][nj] >= value) {
                isPeak = false;
                break;
            }
        }

        if (isPeak) {
            matrix[i][j]--;
            if (matrix[i][j] > 0) {
                pq.emplace(matrix[i][j], i, j);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matrix[i][j];
            }
        }

        stabilizeMatrix(matrix, n, m);

        for (const auto& row : matrix) {
            for (int j = 0; j < m; ++j) {
                if (j > 0) cout << " ";
                cout << row[j];
            }
            cout << '\n';
        }
    }

    return 0;
}
