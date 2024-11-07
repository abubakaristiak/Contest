//https://codeforces.com/contest/2036/problem/D

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--)
    {
        int n,m; cin >> n >> m;
        vector<string> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        vector<string> str;
        for(int i=0; i<min(n/2, m/2); i++){
            string tmp;
            for(int j=i; j<m-i; j++){
                tmp.push_back(a[i][j]);
            }

            for(int k=i+1; k<n-i; k++){
                tmp.push_back(a[k][m-i-1]);
            }

            for(int j=m-i-2; j>=i; j--){
                tmp.push_back(a[n-i-1][j]);
            }

            for(int k=n-i-2; k>i; k--){
                tmp.push_back(a[k][i]);
            }
            str.push_back(tmp);
        }
        int ans=0;
        for(auto x:str){
            x.push_back(x[0]);
            x.push_back(x[1]);
            x.push_back(x[2]);
            int sz=x.size();

            for(int i=0; i<sz-3; i++){
                if(x.substr(i,4)=="1543"){
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }

    
    return 0;
}