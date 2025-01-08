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
        ll n,x,k; cin >> n >> x >> k;
        string s; cin >> s;

        ll cntZero=0, cntOne=0;
        for(ll i=0; i<n; i++){
            if(s[i]=='1'){
                cntOne++;
            }else{
                cntZero+=cntOne;
            }
        }

        if(cntZero<=x && cntZero%k==0){
            cout << 1 << endl;
        }else cout << 2 << endl;
    }
    
    return 0;


// Alhamdulillah
}