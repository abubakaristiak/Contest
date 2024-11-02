//https://codeforces.com/contest/2036/problem/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while (t--)
    {
        int a,b;
        cin >> a >> b;
        int earn[200005]={0};
        for(int i=0; i<b; i++){
            int c,d; cin >> c >> d;
            earn[c]+=d;
        }
        int valid[200005];
        int validCnt=0;
        for(int i=0; i<=b; i++){
            if(earn[i]>0){
                valid[validCnt++]=earn[i];
            }
        }
        sort(valid, valid+validCnt, greater<int>());
        int t=0;
        for(int i=0; i<min(a,validCnt); i++){
            t+=valid[i];
        }
        cout << t << endl;
    }
    
    return 0;
}