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
void solve(){
    int n,k; cin >> n >> k;
    vector<int> v(n);
    vector<int> cnt(21);

    for(int i=0; i<n; i++){
        cin >> v[i];
        cnt[v[i]]++;
    }
    int mx=*max_element(cnt.begin(), cnt.end());
    if(cnt[k]==mx){
        cout << 0 << endl;
        return;
    }
    
    vector<int> prefixCnt=cnt;
    for(int i=0; i<n; i++){
        mx=*max_element(prefixCnt.begin(), prefixCnt.end());
        if(prefixCnt[k]==mx){
            cout << 1 << endl;
            return;
        }
        prefixCnt[v[i]]--;
    }

    vector<int> suffixCnt=cnt;
    for(int i=n-1; i>=0; i--){
        mx=*max_element(suffixCnt.begin(), suffixCnt.end());
        if(suffixCnt[k]==mx){
            cout << 1 << endl;
            return;
        }
        suffixCnt[v[i]]--;
    }
    cout << 2 << endl;
}


int main()
{
    fast();
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;


// Alhamdulillah
}