/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-16 || 22:07:55
 * * * * File    : B_Variety_is_Discouraged.cpp
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
    unordered_map<int, int> fre;
    for(int i=0; i<n; i++){
        cin >> v[i];
        fre[v[i]]++;
    }

    set<int> st;
    for(auto &[x,y]:fre){
        if(y==1){
            st.insert(x);
        }
    }

    int mx=0, tmp_l=-1, tmp_r=-1;
    int l=0, r=0;
    while (r<n)
    {
        if(st.count(v[r])==0){
            l=r+1;
        }else{
            int len=r-l+1;
            if(len>mx){
                mx=len;
                tmp_l=l;
                tmp_r=r;
            }
        }
        r++;
    }
    if(mx==0){
        cout << "0" << endl;
    }else{
        cout << tmp_l+1 << " " << tmp_r+1 << endl;
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