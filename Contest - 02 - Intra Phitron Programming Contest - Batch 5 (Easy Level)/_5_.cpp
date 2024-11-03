//https://www.hackerrank.com/contests/intra-phitron-programming-conctest-batch-5-easy-level/challenges/palindro-cost
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int k;
        cin >> s >> k;

        int n = s.length();
        int t_c = 0;
        for(int i=0; i<n/2; i++){
            if(s[i] !=s[n-i-1]){
                t_c = t_c+abs(s[i] - s[n-i-1]);
            }
        }
        if(t_c <= k){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}