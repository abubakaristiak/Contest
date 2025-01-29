#include <bits/stdc++.h>
using namespace std;

vector<string> patterns = {"RGB", "RBG", "GRB", "GBR", "BRG", "BGR"};

int min_operations_to_white_wall(int n, string &s) {
    int min_changes = INT_MAX;

    for (const string &pattern : patterns) {
        int changes = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != pattern[i % 3]) {
                changes++;
            }
        }
        min_changes = min(min_changes, changes);
    }

    return min_changes;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << min_operations_to_white_wall(n, s) << "\n";
    }

    return 0;
}
