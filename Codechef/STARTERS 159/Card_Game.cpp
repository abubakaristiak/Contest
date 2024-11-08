/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * User    : abubakaristiak
 * * * * Created : 2024-11-09 || 00:28:50
 * * * * File    : Card_Game.cpp
 */

// https://www.codechef.com/problems/CARDGAME1

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
    int t; cin >> t;
    while (t--)
    {
        int n, x; cin >> n >> x;
        int odd, even;
        odd=even=n/2;
        if(n%2==1){
            odd++;
        }
        if(x%2==1){
            cout << odd-1 << endl;
        }else{
            cout << even-1 << endl;
        }
    }
    
    return 0;
}