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
        int n,m,k; cin >> n >> m >> k;
        int mn=INT_MAX;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                int val=2 * (i+j);
                int diff=abs(val-k);
                mn=min(mn, diff);

            }
        }
        cout << mn << endl;
    }
    
    return 0;


// Alhamdulillah
}