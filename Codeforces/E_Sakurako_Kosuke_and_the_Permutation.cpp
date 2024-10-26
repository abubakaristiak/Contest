//https://codeforces.com/contest/2033/problem/E

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>> v[i];
        }
        vector<bool> vis(n,false);
        int ans=0;
        for(int i=0; i<n; i++){
            if(!vis[i]){
                int j=i;
                int cycle=0;
                while(!vis[j]){
                    vis[j]=true;
                    j=v[j]-1;
                    cycle++;
                }
                ans+=(cycle-1)/2;

            }
        }
        cout << ans << endl;
    }
    
    return 0;
}