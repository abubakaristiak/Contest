/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Admin    : abubakaristiak
 * * * * Created : 2024-11-13 || 21:38:43
 * * * * File    : Equate_S_and_T.cpp
 */


#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
string cnting(const string &s){
    string res;
    for(char ch:s){
        res+=ch;
        if(res.size()>=2 && res[res.size()-2]=='a' && res[res.size()-1]=='b'){
            res.pop_back();
        }
    }return res;
}
int main()
{
    fast();
    int t; cin >> t;
    while (t--)
    {
        int len1, len2; cin >> len1 >> len2;
        string s1, s2; cin >> s1 >> s2;
        
        string x=cnting(s1);
        string y=cnting(s2);
        int sz1=x.size(), sz2=y.size();

        
        if(sz1 != sz2){
            no;
            continue;
        }
        
        bool flag=true;
        for(int i=0; i<min(sz1, sz2); i++){
            if(x[i]!=y[i]){
                no;
                flag=false;
                break;
            }
        }
        if(flag) yes;
        
    }
    
    return 0;
}