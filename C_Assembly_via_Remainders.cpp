#include <iostream>
#include <vector>

using namespace std;

vector<int> find_array(int n, vector<int>& x) {
    vector<int> a(n);
    a[0] = 1; // Set the first element of a to 1
    
    // Calculate the remaining elements of a
    for (int i = 1; i < n; ++i) {
        a[i] = a[i - 1] + x[i - 1]; // Incrementally add the previous element of a with x[i - 1]
    }

    return a;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> x(n - 1);
        for (int i = 0; i < n - 1; ++i) {
            cin >> x[i];
        }

        // Find array a for the current test case
        vector<int> a = find_array(n, x);

        // Print the array for the current test case
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
