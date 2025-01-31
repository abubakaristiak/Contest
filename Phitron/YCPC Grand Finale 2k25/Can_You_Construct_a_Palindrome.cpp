/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-31 || 20:50:00
 * * * * File    : Can_You_Construct_a_Palindrome.cpp
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
    int n,k; cin >> n >> k;
    string s; cin >> s;
    int len=s.length();

    map<char, int> mp;
    for(char ch:s){
        mp[ch]++;
    }

    int cnt=0; 
    for(auto it:mp){
        if(it.second%2 != 0){
            cnt++;
        }
    }
    if(cnt-1 <= k){
        yes;
    }else no;
}


int main()
{
    fast();
    solve();

    return 0;


// Alhamdulillah
}