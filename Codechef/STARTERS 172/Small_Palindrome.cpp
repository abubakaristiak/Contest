/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-05 || 22:04:08
 * * * * File    : Small_Palindrome.cpp
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



int main()
{
    fast();
    int t; cin >> t;
    
    while (t--) {
        int a,b; cin >> a >> b;
        string ans;
        ans.append(a/2, '1');
        ans.append(b/2, '2');
        ans.append(b/2, '2');
        ans.append(a/2, '1');
        cout << ans << endl;
    }

    return 0;


// Alhamdulillah
}