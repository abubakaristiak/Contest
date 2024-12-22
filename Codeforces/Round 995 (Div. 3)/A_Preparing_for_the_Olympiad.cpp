/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-22 || 21:23:09
 * * * * File    : demo.cpp
 */



// https://codeforces.com/contest/2051/problem/A



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
        vector<int> v(n,0);
        vector<int> v1(n+1,0);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int val, clk=0;
        cin >> val;
        for(int i=0; i<n-1; i++){
            cin >> val;
            if(v[i]>val){
                clk+=v[i]-val;
            }
        }
        clk+=v[n-1];
        cout << clk << endl;

    }
    
    return 0;


// Alhamdulillah
}