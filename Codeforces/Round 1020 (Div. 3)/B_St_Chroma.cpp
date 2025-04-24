/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-24 || 21:58:27
 * * * * File    : B_St_Chroma.cpp
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
    int n,x; cin >> n >> x;
    vector<int> v(n);
    if(x==0){
        for(int i=1; i<n; i++){
            v[i-1]=i;
            v[n-1]=0;
        }
    }else if(x==n){
        for(int i=0; i<n; i++){
            v[i]=i;
        }
    }else{
        int idx=0;
        for(int i=0; i<x; i++){
            v[idx++]=i;
        }
        for(int j=x+1; j<n; j++){
            v[idx++]=j;
        }
        v[idx]=x;
    }
    for(int i=0; i<n; i++){
        if(i==n){
            cout << endl;
        }
        cout << v[i] << " ";
    }
    cout << endl;
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