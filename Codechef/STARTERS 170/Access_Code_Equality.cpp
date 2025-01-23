/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-22 || 21:26:17
 * * * * File    : Access_Code_Equality.cpp
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
    string s; cin >> s;
    string res="WECNITK";
    if(s==res){
        cout << "Welcome to Web Club!" << endl;
    }else cout << "Access denied" << endl;
}


int main()
{
    fast();
    solve();

    return 0;


// Alhamdulillah
}