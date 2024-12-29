/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-29 || 13:01:53
 * * * * File    : Chefland_Library.cpp
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
int main()
{
    fast();
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        for(int i=0; i<n; i++){
            cin >> v[i];
            mp[v[i]]=i+1;
        }

        int ans=0;
        for(auto [x,y]:mp){
            ans+=y;
        }
        cout << ans << endl;
    }
    
    return 0;


// Alhamdulillah
}