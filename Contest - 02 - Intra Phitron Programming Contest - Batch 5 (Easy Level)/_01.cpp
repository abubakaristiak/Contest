//https://www.hackerrank.com/contests/intra-phitron-programming-conctest-batch-5-easy-level/challenges/closet-to-the-century
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for(int i=0; i<n; i++){
            cin >> ar[i];
        }
        int mx = ar[0];

        for(int i=0; i<n; i++){
            if(ar[i] > mx){
                mx = ar[i];
            }
        }
        cout << mx <<endl;
    }
    
    return 0;
}