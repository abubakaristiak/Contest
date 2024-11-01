//https://codeforces.com/contest/2032/problem/A

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
        int p=n*2;
        int ar[p];
        for(int i=0; i<p; i++){
            cin >> ar[i];
        }
        int zero=0;
        int one=0;
        for(auto it:ar){
            if(it==0){
                zero++;
            }
            else one++;
        }
        int res_max=2*n-max(zero,one);
        int res_min=one%2;
        cout << res_min << " " << res_max << endl;
    }
    
    return 0;
}