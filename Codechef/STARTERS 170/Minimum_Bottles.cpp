/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-22 || 20:33:53
 * * * * File    : Minimum_Bottles.cpp
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
    int n,x; cin >> n >> x;
    vector<int> v(n);
    int sum=0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        sum+=v[i];
    }
    cout << (sum+x-1)/x << endl;
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