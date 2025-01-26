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
    int countPartitions(vector<int>& nums) {
        int n=nums.size();

        int sum = 0;
        for(int num:nums){
            sum+=num;            
        }

        int cnt=0;
        int left_sum=0;
        for(int i=0; i<n-1; i++){
            left_sum+=num[i];
            int right_sum=sum-left_sum;
            if((left_sum-right_sum)%2==0){
                cnt++
            }
        }
        return cnt;
        
    }
};