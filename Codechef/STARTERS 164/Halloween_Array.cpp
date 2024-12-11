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
        int n,l,r; cin >> n >> l >> r;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        vector<int> pre(n+1, 0);
        for(int i=1; i<=n; i++){
            pre[i]=pre[i-1]^v[i-1];
        }
        ll mul=1;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                int XOR=pre[j]^pre[i];
            }
            if(mul>r){
                break;
            }
        }
        cout << (mul >= l && mul <= r ? "YES\n" : "NO\n");
    }
    
    return 0;


// Alhamdulillah
}












