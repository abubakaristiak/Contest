/*
||-----------------------------------||
||        Abu Bakar Istiak           ||
||     Chattogram Polytechnic        ||
||        Department of CST          ||
||    abubakar119147@gmail.com       ||
||-----------------------------------||
*/
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ull unsigned long long
#define pi pair<ll, ll>
#define vi vector<ll>
#define vpi vector<pi>
#define pb push_back
#define endl "\n"
#define sp " "
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define sz(x) (ll)(x).size()
#define minus cout << -1 << endl
#define zero cout << 0 << endl
#define MAX 100000
#define MOD 998244353
#define afor(i,a,b) for (ll i = (a); i < (b); ++i)
#define rfor(i,a,b) for (ll i = (a); i >= (b); --i)
#define asort(v) sort((v).begin(), (v).end())
#define rsort(v) sort((v).begin(), (v).end(), greater<>())
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    ll n; cin >> n;
    vector<ll> v(n);
    afor(i,0,n){
        cin >> v[i];
    }

    if(n==1){
        cout << 1 << endl;
        return;
    }
    vector<ll> p(n);
    p[0]=v[0];
    afor(i,1,n){
        p[i]=min(p[i-1], v[i]);
    }
    vector<ll> s(n);
    s[n-1]=v[n-1];
    rfor(i,n-2,0){
        s[i]=max(s[i+1], v[i]);
    }

    string res="";
    afor(i,0,n){
        bool c1=(i==0) ? true:(v[i]<p[i-1]);
        bool c2=(i==n-1) ? true:(v[i]>s[i+1]);
        if(c1 or c2){
            res.pb('1');
        }else res.pb('0');
    }
    cout << res << endl;
}


int main() {
    fast();
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;

    // Alhamdulillah
}