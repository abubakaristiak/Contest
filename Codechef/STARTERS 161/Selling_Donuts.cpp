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
        int a,b; cin >> a >> b;
        vector<ll> va(a), vb(b);
        for(int i=0; i<a; i++){
            cin >> va[i];
        }

        for(int i=0; i<b; i++){
            cin >> vb[i];
        }

        int cnt=0;
        for(int i=0; i<b; i++){
            int val=vb[i]-1;
            if(va[val]>0){
                va[val]--;
            }else cnt++;
        }
        cout << cnt << endl;
    }
    
    return 0;


// Alhamdulillah
}