// https://www.codechef.com/problems/LARGESUB

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
        string s; cin >> s;
        int ans=0;
        for(int i=0; i<n; i++){
            if(s[i]==s[0]){
                ans=max(ans,i+1);
            }
            if(s[i]==s[n-1]){
                ans=max(ans,n-i);
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}