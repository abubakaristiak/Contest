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
        int n; cin >>n;
        string a,b; cin >> a >> b;
        int cnt1=0, cnt2=0;
        for(int i=0; i<n; i++){
            if(a[i]=='1' || b[i]=='1'){
                cnt1++;
            }
            if((a[i]=='1' && b[i]=='0') || (a[i]=='0' && b[i]=='1')){
                cnt2++;
            }
        }
        if(cnt1%2==1 || cnt2>0){
            yes;
        }else no;
    }
    
    return 0;


// Alhamdulillah
}