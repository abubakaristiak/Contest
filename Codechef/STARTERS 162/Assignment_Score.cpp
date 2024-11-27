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
        int n; cin >> n;
        vector<int> v(n);
        int score=0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            score+=v[i];
        }
        int total=(n+1)*100;
        int passMark=ceil(0.5*total-score);
        if(passMark>100){
            cout << -1 << endl;
        }else if(passMark<=0){
            cout << 0 << endl;
        }else{
            cout << passMark << endl;
        }
    }
    
    return 0;


// Alhamdulillah
}



