// https://www.codechef.com/problems/BUYGAME

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        int cnt=0, idx=-1;
        for(int i=0; i<n; i++){
            if(min(a[i],b[i]) != b[i]){
                cnt++;
                idx = i;
            }
        }

        if(cnt==0 || cnt > 1){
            long long ans=0;
            for(int i=0; i<n; i++){
                ans+=min(a[i],b[i]);
            }
            cout << ans << endl;
        }else{
            long long ans=0, res=0;
            for(int i=0; i<n; i++){
                ans+=b[i];
            }
            res=ans;
            for(int i=0; i<n; i++){
                if(i != idx){
                    long long cur = res-b[idx]-b[i]+a[idx]+a[i];
                    ans = min(ans, cur);
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}