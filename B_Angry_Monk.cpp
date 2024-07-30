#include <iostream>
#include <vector>
using namespace std;

int min_operations_to_merge(int n, vector<int>& pieces) {
    int count1 = 0;
    vector<int> largerPieces;
    
    // Count the number of pieces of length 1 and separate the larger pieces
    for (int piece : pieces) {
        if (piece == 1) {
            count1++;
        } else {
            largerPieces.push_back(piece);
        }
    }
    
    // Sort larger pieces in descending order
    sort(largerPieces.rbegin(), largerPieces.rend());
    
    int operations = 0;
    
    // Process larger pieces
    for (int piece : largerPieces) {
        while (piece > 1) {
            // Split the piece into 1 and (piece - 1)
            piece--;
            count1++;
            operations++;
        }
    }
    
    // Combine all pieces into one
    operations += count1 - 1;
    
    return operations;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> pieces(k);
        for (int i = 0; i < k; i++) {
            cin >> pieces[i];
        }
        cout << min_operations_to_merge(n, pieces) << endl;
    }
    return 0;
}