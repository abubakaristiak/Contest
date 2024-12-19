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
#define mx 200000
int fre[mx+1];

using namespace std;
int main()
{
    fast();
    int t; cin >> t; 
    while (t--)
    {
        int n; cin >> n;
        vector<int> vec1(n), vec2(n);
        for(int i=0; i<n ;i++){
            cin >> vec1[i];
        }


        memset(fre,0,sizeof(fre[0])*(n + 1));
        for(int i=0; i<n; i++){
            vec2[i]=vec1[i];
            fre[vec2[i]]++;
        }

        for(int i=0; i<n; i++){
            cout << vec2[i] << " ";
        }
        cout << endl;
    }
    
    return 0;


// Alhamdulillah
}