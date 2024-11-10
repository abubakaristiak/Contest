/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * User    : abubakaristiak
 * * * * Created : 2024-11-09 || 22:31:05
 * * * * File    : B_ch.cpp
 */

// https://codeforces.com/contest/2029/problem/B

#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
int main()
{
    fast();
    int t;
    cin >> t;
    while (t--){

        int n;
        cin >> n;
        string s, r;
        cin >> s >> r;
        vector<char> v;

        int x = 0;
        for (char c : s) {
            v.push_back(c);
            while (v.size()>= 2 && v[v.size()-2]!=v[v.size()-1] && x<r.size()) {
                char ch = r[x];
                v.pop_back();
                v.pop_back();
                v.push_back(ch);
                x++;
            }
        }

        if (x == n-1 && v.size()==1) {
            yes;
        }else no;
    }
    return 0;
}