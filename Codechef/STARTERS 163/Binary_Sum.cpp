#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
int main()
{
    fast();
    int t; cin >> t; 
    while (t--)
    {
        int n, k; cin >> n >> k;
        int div=(n/2);
        if(n%2==0 && div==k){
            yes;
        }else if(n%2!=0 && (div+1)==k || div==k){
            yes;
        }else no;
    }
    
    return 0;


// Alhamdulillah
}