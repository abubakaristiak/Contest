/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2024-12-28 || 22:56:04
 * * * * File    : A_Tender_Carpenter.cpp
 */


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
int main()
{
    fast();
    int test; cin >> test;
    while (test--)
    {
        int n; cin >> n;
        vector<int> v(n);

        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        bool flag=true;
        for(int i=0; i<n; i++){
            if(i-1>=0 and v[i-1]>=v[i]){
                if(2*v[i]>v[i-1]){
                    flag=false; break;
                }
            }

            else if(i-1>=0 and v[i-1]<v[i]){
                if(2*v[i-1]>v[i]){
                    flag=false; break;;
                }
            }
        }
        if(flag){
            no;
        }else yes;
    }
    
    return 0;


// Alhamdulillah
}