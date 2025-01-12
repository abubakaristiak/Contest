/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-12 || 21:24:29
 * * * * File    : A_Two_Frogs.cpp
 */



// https://codeforces.com/contest/2055/problem/A



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
        int n,a,b; cin >> n >> a >> b;
        int dis=abs(a-b);

        if(dis%2==0){
            yes;
        }else no;

    }
    
    return 0;


// Alhamdulillah
}