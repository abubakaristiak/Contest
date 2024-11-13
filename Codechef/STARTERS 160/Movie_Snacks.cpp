/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-13 || 21:21:01
 * * * * File    : Movie_Snacks.cpp
 */


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
    int x,y,z;
    cin >> x >> y >> z;

    int op1 = 2*x+3*y;
    int op2 = z+x+2*y;
    int op3 = 2*z+y;
    cout << min({op1, op2, op3}) << endl;
    return 0;
}