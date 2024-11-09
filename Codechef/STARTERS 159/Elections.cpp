/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * User    : abubakaristiak
 * * * * Created : 2024-11-09 || 06:29:33
 * * * * File    : Elections.cpp
 */

// https://www.codechef.com/problems/USELEC

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
int main()
{
    fast();
    int t; cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        vector<ll> b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }

        vector<ll> diff(n);
        for(int i=0; i<n; i++){
            diff[i]=a[i]-b[i];
        }
        rsort(diff);
        for(int i=0; i<n; i++){
            if(x<=0)
                break;
            if(diff[i]<=0){
                if(diff[i]==0){
                    x--;
                    diff[i]=1;
                }
                else{
                    x-=min(x,abs(diff[i]));
                    if(x>0){
                        x--;
                        diff[i]=1;
                    }
                }
            }

        }
        int cnt=0;
        for(int i=0; i<n; i++){
            if(diff[i]>0){
                cnt++;
            }
        }
        if(cnt>n/2) yes;
        else no;



    }
        
    return 0;
}