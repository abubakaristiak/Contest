/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-23 || 21:09:09
 * * * * File    : S_to_T.cpp
*/

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n; cin >> n;
    string a, b; cin >> a >> b;

    if (a.size() != n || b.size() != n) {
        cout << -1 << endl;
        return;
    }

    vector<int> idx;

    for (int i = n - 1; i > 0; i--) {
        if (a[i] != b[i]) {
            if (a[i - 1] == '1') {
                a[i] ^= 1; // flip using XOR
                idx.push_back(i);
            } else {
                cout << -1 << endl;
                return;
            }
        }
    }

    if (a[0] != b[0]) {
        cout << -1 << endl;
        return;
    }

    cout << idx.size() << endl;
    for (int val : idx) cout << val << " ";
    if (!idx.empty()) cout << endl;
}

int main()
{
    fast();
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
    // Alhamdulillah
}
