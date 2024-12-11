/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-05 || 21:15:07
 * * * * File    : A_Line_Breaks.cpp
 */

#include<bits/stdc++.h>
#define ll long long
#define str vector<string> v
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
        int n, m; cin >> n >> m;
        str(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        int cnt=0, tmp_len=0;
        for(int i=0; i<n; i++){
            int len=v[i].size();
            if(tmp_len+len>m) break;
            tmp_len+=len;
            cnt++;
        }
        cout << cnt << endl;
    }
    
    return 0;


// Alhamdulillah
}