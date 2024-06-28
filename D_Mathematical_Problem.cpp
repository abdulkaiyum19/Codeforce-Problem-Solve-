#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <numeric>

using namespace std;

// Generate all possible expressions by placing '+' and '*' between digits
void generateExpressions(const string& s, int pos, string expr, int opCount, vector<string>& expressions) {
    int n = s.size();
    if (pos == n - 1) {
        if (opCount == n - 2) {
            expressions.push_back(expr);
        }
        return;
    }
    if (opCount < n - 2) {
        generateExpressions(s, pos + 1, expr + '*' + s[pos + 1], opCount + 1, expressions);
        generateExpressions(s, pos + 1, expr + '+' + s[pos + 1], opCount + 1, expressions);
    }
}

// Evaluate the expression based on the precedence of '*' over '+'
long long evaluateExpression(const string& expr) {
    vector<long long> terms;
    size_t start = 0;
    size_t end = expr.find('+');

    while (end != string::npos) {
        string term = expr.substr(start, end - start);
        size_t mulStart = 0;
        size_t mulEnd = term.find('*');
        long long product = 1;

        while (mulEnd != string::npos) {
            product *= stoll(term.substr(mulStart, mulEnd - mulStart));
            mulStart = mulEnd + 1;
            mulEnd = term.find('*', mulStart);
        }
        product *= stoll(term.substr(mulStart));
        terms.push_back(product);

        start = end + 1;
        end = expr.find('+', start);
    }

    string term = expr.substr(start);
    size_t mulStart = 0;
    size_t mulEnd = term.find('*');
    long long product = 1;

    while (mulEnd != string::npos) {
        product *= stoll(term.substr(mulStart, mulEnd - mulStart));
        mulStart = mulEnd + 1;
        mulEnd = term.find('*', mulStart);
    }
    product *= stoll(term.substr(mulStart));
    terms.push_back(product);

    long long result = 0;
    for (auto t : terms) {
        result += t;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        if (n == 2) {
            cout << s << '\n';
            continue;
        }

        vector<string> expressions;
        generateExpressions(s, 0, string(1, s[0]), 0, expressions);

        long long minResult = LLONG_MAX;
        for (auto& expr : expressions) {
            minResult = min(minResult, evaluateExpression(expr));
        }

        cout << minResult << '\n';
    }

    return 0;
}
