/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-05 || 22:53:02
 * * * * File    : A_Max_and_Mod.cpp
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


void istiak()
{
    ll n; cin >> n;
    if(n%2==0){
        cout << -1 << endl;
    }else{
        cout << n << " ";
        for(ll i=1; i<n; i++){
            cout << i << " ";
        }
        cout << endl;
    }
}


int main()
{
    fast();
    int t; cin >> t;
    while (t--) {
        istiak();
    }

    return 0;


// Alhamdulillah
}