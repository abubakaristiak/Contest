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
        string s; cin >> s;
        reverse(s.begin(), s.end());

        string res; 
        for(char ch:s){
            if(ch=='p'){
                res.push_back('q');
            }else if(ch=='q'){
                res.push_back('p');
            }else res.push_back('w');
        }
        cout << res << endl;
    }
    
    return 0;


// Alhamdulillah
}