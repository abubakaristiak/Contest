/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-19 || 22:30:24
 * * * * File    : D_Subtract_Min_Sort.cpp
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
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    bool flag=false;
    int i=0;
    while (i<n-1)
    {
        if(v[i]>v[i+1]){
            flag=true;
            break;
        }else{
            v[i+1]-=v[i];
            v[i]=0;
        }i++;
    }
    if(flag) no;
    else yes;;
    
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