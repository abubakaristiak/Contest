/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-25 || 21:22:51
 * * * * File    : B_Team_Training.cpp
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
    ll n,x; cin >> n >> x;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    rsort(v);
    ll tm=0, m=0, mn=INT_MAX;
    for(int i=0; i<n; i++){
        m++;
        mn=min(mn, v[i]);
        if(m*mn>=x){
            tm++;
            m=0;
            mn=INT_MAX;
        }
    }
    cout << tm << endl;
}


int main()
{
    fast();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah---(Ramadan Kareem)
}