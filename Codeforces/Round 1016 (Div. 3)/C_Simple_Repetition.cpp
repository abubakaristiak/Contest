/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-08 || 21:22:20
 * * * * File    : C_Simple_Repetition.cpp
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

bool isPrime(ll n){
    if(n<2){
        return false;
    }
    for(ll i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void solve()
{
    ll x,k; cin >> x >> k;
    if(k==1){
        if(isPrime(x)){
            yes;
        }else no;
    }else{
        if(x!=1){
            no;
        }else{
            ll cnt=0;
            for(ll i=0; i<k; i++){
                cnt=cnt*10+1;
            }
            if(isPrime(cnt)){
                yes;
            }else no;
        }
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