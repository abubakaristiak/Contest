//https://codeforces.com/contest/2036/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n; 
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        bool flag=false;
        for(int i=0; i<v.size()-1; i++){
            int ans=abs(v[i]-v[i+1]);
            if(ans!=5 && ans!=7){
                flag=true;
            }
        }
        if(flag) cout  << "NO" << endl;
        else cout << "YES" << endl;
    }
    
    return 0;
}