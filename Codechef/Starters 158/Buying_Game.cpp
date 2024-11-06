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




// Another approach from YT;
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<pair<ll, ll>> vpl;

void solve(int testcase) {
    ll n;
    cin >> n;
    vl x(n), y(n);

    // Input each element in vector x and y separately
    for (ll i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (ll i = 0; i < n; i++) {
        cin >> y[i];
    }

    vpl vec(n);
    ll sum = accumulate(y.begin(), y.end(), 0ll);
    ll ans = sum;

    for (ll i = 0; i < n; i++) {
        vec[i] = {x[i] - y[i], y[i]};
    }

    sort(vec.begin(), vec.end());

    sum += vec[0].first;
    for (ll i = 1; i < n; i++) {
        sum += vec[i].first;
        ans = min(sum, ans);
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve(t);
    }

    return 0;
}
