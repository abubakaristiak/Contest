/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-31 || 23:07:07
 * * * * File    : Swish_Game.cpp
 */



// upsolve:
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
    int m,k; cin >> m >> k;
    string s; cin >> s;

    int cnt=0; 
    for(int i=0; i<m; i++){
        if(s[i]=='S'){
            cnt++;
        }
    }
    if(cnt>=k){
        cout << m << endl;
    }else{
        int need=k-cnt;
        cout << m+(need-1) << endl;
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