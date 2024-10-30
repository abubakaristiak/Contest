// https://www.codechef.com/problems/XORSMALL

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int cur=a[0];
        for(auto &x:a){
            cur &= x;
        }
        cout << cur << endl;
        
    }
    
    return 0;
}