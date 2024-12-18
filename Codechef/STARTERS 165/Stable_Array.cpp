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
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        stack<int> value, idx;
        value.push(v[0]);
        idx.push(0);

        int mx=0;
        for(int i=1; i<n; i++){
            int val=v[i];

            while (!value.empty())
            {
                int top=value.top();
                if(top<val){
                    value.pop();
                    idx.pop();
                }else {
                    break;
                }
            }
            if(!value.empty()){
                int topidx=idx.top();
                int diff=i-topidx-1;
                if(diff>mx){
                    mx=diff;
                }
            }else{
                mx=i;
            }
            value.push(val);
            idx.push(i);
            
        }
        cout << mx << endl;
    }
    
    return 0;


// Alhamdulillah
}