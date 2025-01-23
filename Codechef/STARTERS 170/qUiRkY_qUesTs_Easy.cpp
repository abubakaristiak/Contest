/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-23 || 23:06:55
 * * * * File    : qUiRkY_qUesTs_Easy.cpp
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


void solve()
{
    ll n; cin >> n;
    vector<ll> v(n+1);
    for(ll i=1; i<=n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll sum=0;
    for(ll i=1; i<=n; i++){
        sum+=v[i];
    }
    ll ans=sum;
    for(ll i=1; i<=n; i++){
        sum-=v[i];
        ans=max(ans, sum+(i*i));
    }
    cout << ans << endl;
}


int main()
{
    fast();
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    

    return 0;


// Alhamdulillah
}