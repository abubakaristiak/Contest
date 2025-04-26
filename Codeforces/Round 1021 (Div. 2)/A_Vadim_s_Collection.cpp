/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-26 || 14:45:14
 * * * * File    : A_Vadim_s_Collection.cpp
*/



#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


string solve(string &s)
{
    vector<char> nums(s.begin(), s.end());
    asort(nums);
    string res(10,'0');

    int dg[10]={9,8,7,6,5,4,3,2,1,0};
    for(int i=0; i<10; i++){
        for(auto it=nums.begin(); it!=nums.end(); ){
            if(*it>='0'+dg[i]){
                res[i]=*it;
                nums.erase(it);
                break;;
            }else{
                it++;
            }
        }
    }
    return res;

}


int main()
{
    fast();
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        cout << solve(s) << endl;
    }

    return 0;


// Alhamdulillah
}