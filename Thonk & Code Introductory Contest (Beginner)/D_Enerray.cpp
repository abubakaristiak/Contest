#include <bits/stdc++.h>
using namespace std;

int minEversions(vector<int>& a) {
    int n = a.size();
    int i = n - 1;
    while (i > 0 && a[i - 1] <= a[i]) i--;
    if (i == 0) return 0;

    int count = 1;
    int last = a[n - 1];

    while (i > 0) {
        int j = i - 1;
        while (j >= 0 && a[j] > last) j--;
        count++;
        if (j < 0) break;
        i = j + 1;
        last = a[i - 1];
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        cout << minEversions(a) << '\n';
    }

    return 0;
}
