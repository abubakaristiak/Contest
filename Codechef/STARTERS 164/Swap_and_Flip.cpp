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
        string s,t; cin >> s >> t;
        int cnt_s=0, cnt_t=0;
        for(char ch:s){
            if(ch=='1'){
                cnt_s++;
            }
        }
        for(char ch:t){
            if(ch=='1'){
                cnt_t++;
            }
        }
        if(abs(cnt_s-cnt_t)%2==0){
            yes;
        }else no;
    }
    
    return 0;


// Alhamdulillah
}