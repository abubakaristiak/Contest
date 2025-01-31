/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-31 || 22:38:18
 * * * * File    : Distinct_Distinct.cpp
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
    int x; cin >> x;
    int cnt=0;
    for(int i=1; i*i<=x; i++){
        if(x%i==0){
            cnt++;
            if(i!=x/i){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}


int main()
{
    fast();
    int t = 1;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}