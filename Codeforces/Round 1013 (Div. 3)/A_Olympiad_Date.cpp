/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-25 || 20:48:59
 * * * * File    : A_Olympiad_Date.cpp
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
    string tar="01032025";
    ll n; cin >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }

    string d="";
    map<char, ll> fre;
    for(char ch:tar){
        fre[ch]++;
    }

    map<char, ll> cnt;
    for(ll i=0; i<n; i++){
        char c='0'+v[i];
        cnt[c]++;

        bool ok=true;
        for(char ch:tar){
            if(cnt[ch]<fre[ch]){
                ok=false;
                break;
            }
        }
        if(ok){
            cout << i+1 << endl;
            return;
        }
    }
    cout << 0 << endl;
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