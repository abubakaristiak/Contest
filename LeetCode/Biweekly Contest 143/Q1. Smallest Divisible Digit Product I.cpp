#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
            int mul=1;
            int tmp=n;
            while(tmp>0){
                int digit=tmp%10;
                mul*=digit;
                tmp/=10;
            }
            if(mul%t==0){
                return n;
            }
            n++;
        }
    }
};