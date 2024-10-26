//https://codeforces.com/contest/2033/problem/D

#include<bits/stdc++.h>
using namespace std;

int solve(const vector<int>& a, int n){
    unordered_map<int,int> preIdx;
    int prefixSum=0; 
    int count=0;
    int end=-1;

    preIdx[0] = -1;
    for(int i=0; i<n; i++){
        prefixSum+=a[i];
        if(preIdx.find(prefixSum) != preIdx.end()){
            int prevIdx = preIdx[prefixSum];
            if(prevIdx >= end){
                count++;
                end=i;
            }
        }
        preIdx[prefixSum] = i;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>> t;
    while (t--)
    {
        int n; cin>> n; 
        vector<int> v(n); 
        for(int i=0; i<n; i++){
            cin>>v[i];
        }  
        cout << solve(v,n) << endl;
    }
    
    return 0;
}