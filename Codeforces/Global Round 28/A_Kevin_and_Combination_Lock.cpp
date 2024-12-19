/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-19 || 21:04:37
 * * * * File    : A_Kevin_and_Combination_Lock.cpp
 */


// https://codeforces.com/contest/2048/problem/A



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
    while(t--){
        int x; cin >> x;
        while (x>=33)
        {
            if(x%100==33){
                x/=100;
            }else if(x>=33){
                x-=33;
            }else break;
        }

        if(x==0){
            yes;
        }else no;

        
        
    }
    return 0;


// Alhamdulillah
}