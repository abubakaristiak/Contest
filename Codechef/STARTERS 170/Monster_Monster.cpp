/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-22 || 21:39:38
 * * * * File    : Monster_Monster.cpp
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
    ll n,x; cin >> n >> x;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    sort(v.rbegin(), v.rend());
    ll sum=0, ans=v[0];
    for(int i=1; i<n; i++){
        sum+=x;
        ll cur=v[i]+sum;
        ans=max(ans, cur);
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
