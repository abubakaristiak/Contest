#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int total_k=0;
        for(auto num:nums)
        {
            if(num==k){
                total_k++;
            }
        }

        vector<int>v=nums;
        int mx=0;
        for(int i=1; i<=50; i++){
            if(i==k){
                continue;
            }   
            int x=k-i;
            int cur_sum=0;
            int local_sum=0;
            for(auto num:nums){
                if(num==i){
                    cur_sum+=1;
                }else if(num==k){
                    cur_sum-=1;
                }if(cur_sum<0){
                    cur_sum=0;
                }if(cur_sum>local_sum){
                    local_sum=cur_sum;
                }
            }
            if(local_sum>mx){
                mx=local_sum;
            }
        }
        int mx_freq = total_k+mx;
        return mx_freq;
    }
};