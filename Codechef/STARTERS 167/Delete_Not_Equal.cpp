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
        string s; cin >> s;

        int zeroCnt=count(s.begin(), s.end(), '0');
        int oneCnt= count(s.begin(), s.end(), '1');

        if(zeroCnt==n || oneCnt==n){
            cout << n << endl;
        }else cout << 1 << endl;
        
    }
    
    return 0;


// Alhamdulillah
}