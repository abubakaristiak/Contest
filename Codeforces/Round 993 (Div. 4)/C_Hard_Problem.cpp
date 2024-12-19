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
        ll m, a, b, c; cin >> m >> a >> b >> c;
        ll r1=min(m,a);
        ll r2=min(m,b);
        ll remain=(2*m)-(r1+r2);
        ll x=min(remain,c);
        cout << r1+r2+x << endl;
    }
    
    return 0;


// Alhamdulillah
}