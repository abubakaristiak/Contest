//https://www.codechef.com/problems/MUL2

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    ll t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }

        vector<ll> ans;
        map<ll,ll> cnt;
        for(ll i=0; i<n; i++){
            cnt[a[i]]++;
            if(cnt[a[i]]>=2){
                ll val=a[i];
                while (true)
                {
                    ll total=cnt[val];
                    if(cnt[val]<2) break;
                    cnt.erase(val);
                    for(ll j=1; j<=(total/2); j++){
                        cnt[2*val]++;
                    }
                    val*=2;
                }
                
            }
            ans.push_back(cnt.size());
        }
        for(ll i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;

    }
    
    return 0;
}