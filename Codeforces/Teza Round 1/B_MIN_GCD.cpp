/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-05 || 23:12:19
 * * * * File    : B_MIN_GCD.cpp
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

ll gcd(ll a, ll b){
    while (b!=0){
        a%=b;
        swap(a,b);
    }
    return a;
    
}

void istiak()
{
    ll n; cin >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    asort(v);
    ll mn=v[0];
    ll gc=0;
    for(ll i=1; i<n; i++){
        if(v[i]%mn==0){
            gc=gcd(v[i],gc);
        }
    }
    if(gc==mn){
        cyes;
    }else cno;

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