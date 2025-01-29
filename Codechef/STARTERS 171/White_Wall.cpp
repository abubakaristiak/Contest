/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-29 || 21:10:11
 * * * * File    : White_Wall.cpp
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

vector<string> nums = {"BGR", "BRG", "GBR", "GRB", "RBG", "RGB"};
void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    int mn=INT_MAX;
    for(auto num:nums){
        int cnt=0;
        for(int i=0; i<n; i++){
            if(s[i] != num[i%3]){
                cnt++;
            }
        }
        mn=min(mn,cnt);
    }
    cout << mn << endl;
    
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