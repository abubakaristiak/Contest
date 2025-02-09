#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    int n,m; cin >> n >> m;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int v1; cin >> v1;
    int p=min(v[0], v1-v[0]);
    bool flag=true;

    for(int i=1; i<n; i++){
        int option1=v[i];
        int option2=v1-v[i];

        if(option1>=p && option2>=p){
            p=min(option1, option2);
        }else if(option1>=p){
            p=option1;
        }else if(option2>=p){
            p=option2;
        }else{
            flag=false;
            break;
        }
    }
    if(flag){
        yes;
    }else no;


    

    


}


int main()
{
    fast();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}