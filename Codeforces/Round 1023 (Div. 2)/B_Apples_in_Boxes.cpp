/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-05-05 || 21:39:28
 * * * * File    : B_Apples_in_Boxes.cpp
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
#define sz(x) x.size()
#define endl "\n"
#define afor(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define rfor(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    ll n,k;
    cin >> n >> k;
    ll mn=LLONG_MAX, mx=LLONG_MIN, sum=0;
    vector<ll> v(n);
    afor(i, 0, n){
        cin >> v[i];
        sum+=v[i];
        mx=max(mx, v[i]);
        mn=min(mn, v[i]);
    }
    int cnt=0;
    afor(i,0,n){
        if(v[i]==mx){
            cnt++;
        }
    }
    if((mx-mn==k+1 && cnt>1) || mx-mn>k+1){
        cout << "Jerry" << endl;
    }else{
        if(sum%2){
            cout << "Tom" << endl;
        }else cout << "Jerry" << endl;
    }
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