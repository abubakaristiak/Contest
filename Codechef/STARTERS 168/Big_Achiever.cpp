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

        int val=0;
        vector<int> res;
        for(int i=0; i<n; i++){
            if(v[i]>val){
                res.push_back(1);
                val=v[i];
            }else res.push_back(0);
        }

        for(int num:res){
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;


// Alhamdulillah
}