// Upsolved:
/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-11 || 23:42:16
 * * * * File    : Find_Outside_Array.cpp
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
    vector<int> v(n);
    bool pos=false, neg=false;
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(v[i]>0){
            pos=true;
        }
        if(v[i]<0){
            neg=true;
        }
    }
    asort(v);
    if(pos){
        cout << v[n-1] << " " << v[n-1] << endl;
    }else if(neg){
        cout << v[0] << " " << v[0] << endl;
    }else cout << -1 << endl;
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