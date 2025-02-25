/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-25 || 11:14:58
 * * * * File    : demo2.cpp
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


void solve() {
    int n, target; 
    cin >> n >> target;
    vector<int> v(n);
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int sum = 0;
    int l= 0;
    int mn=INT_MAX;

    for(int r = 0; r < n; r++) {
        sum += v[r]; 
        
        while(sum >= target) {
            mn = min(mn, r - l + 1);
            sum -= v[l]; 
            l++;
        }
    }

    if(mn==INT_MAX){
        cout << -1 << endl;
    }else cout << mn << endl;

}


int main()
{
    fast();
    int t=1;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}