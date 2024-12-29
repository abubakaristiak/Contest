/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-24 || 21:09:14
 * * * * File    : A_Coin_Transformation.cpp
 */



#include<bits/stdc++.h>
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

using namespace std;
ll maxCoins(ll n) {
    if(n<=3) return 1; 

    ll c = 1; 
    while (n>3) {
        n/=4;
        c*=2; 
    } 
    return c;
}


int main() {
    fast();
    int t; cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << maxCoins(n) << endl;
    }
    return 0;
}


// Alhamdulillah
