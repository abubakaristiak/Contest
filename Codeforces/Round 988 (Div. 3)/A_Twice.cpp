/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-11-17 || 20:47:50
 * * * * File    : A_Twice.cpp
 */

// https://codeforces.com/contest/2037/problem/A


#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
int main()
{
    fast();
    ll t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        map<int,int> mp;
        for(int i=0; i<n; i++){
            int val; cin >> val;
            mp[val]++;
        }
        ll res=0;
        for(auto &val:mp){
            if(val.second>1){
                res+=val.second/2;
            }
        }
        cout << res << endl;
    }
    
    return 0;

 // Alhamdulillah
}