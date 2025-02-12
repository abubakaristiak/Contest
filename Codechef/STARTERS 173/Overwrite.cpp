/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-12 || 21:29:09
 * * * * File    : Overwrite.cpp
*/


// TLE
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
vector<int> isSmaller(vector<int> &v2){
    int m=v2.size();
    vector<int> s=v2;
    for(int i=1; i<m; i++){
        rotate(v2.begin(), v2.begin()+1, v2.end());
        s=min(s,v2);
    }
    return s;
}


void solve()
{
    int n,m; cin >> n >> m;
    vector<int> v1(n), v2(m);
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        cin >> v1[i];
        mp[v1[i]]=i;
    }


    for(int i=0; i<m; i++){
        cin >> v2[i];
    }


    vector<int> sv2=isSmaller(v2);
    for(int i=0; i<=n-m; i++){
        vector<int> val=v1;
        for(int j=0; j<m; j++){
            val[i+j]=sv2[j];
        }
        if(val<v1){
            v1=val;
        }
    }
    for(int num:v1){
        cout << num << " ";
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