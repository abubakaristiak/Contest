/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-17 || 21:23:42
 * * * * File    : A_Shape_Perimeter.cpp
 */


// https://codeforces.com/contest/2056/problem/A


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
void solve(){
    int n,m; cin >> n >> m;
    int res = 4 * n * m;
    for(int i=0; i<n; i++){
        int x,y; cin >> x >> y;
        if(i==0){
            continue;;
        }
        res -= 2*(m-x+m-y);
    }
    cout << res << endl;
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