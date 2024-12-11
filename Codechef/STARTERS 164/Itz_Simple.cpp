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
    while(t--){
        int n, ved, vx;
        cin >> n >> ved >> vx;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        int mx=*max_element(v.begin(), v.end());
        int ved_val=ved+mx;
        int sum=0; 
        bool track=false;
        for(int num: v){
            if(num==mx && !track){
                track=true;
            }
            else sum+=num;
        }
        int vx_val=sum+vx;
        if(ved_val>vx_val){
            cout << "Ved" << endl;
        }else if(vx_val > ved_val){
            cout << "Varun" << endl;
        }else cout << "Equal" << endl;
    }
    return 0;


// Alhamdulillah
}