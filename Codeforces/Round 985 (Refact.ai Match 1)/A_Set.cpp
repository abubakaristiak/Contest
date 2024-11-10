/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * User    : abubakaristiak
 * * * * Created : 2024-11-09 || 22:44:40
 * * * * File    : A_Set.cpp
 */

// https://codeforces.com/contest/2029/problem/A

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
    int t;
    cin >> t;
    while (t--)
    {
        ll l,r,k; cin >> l >> r >> k;
        ll a1=l , a2=r; ll res=0LL;

        while (a1<=a2) {
            ll mid=a1+(a2-a1)/2;

            ll a3=mid*k;

            if (a3<=r) {
                a1=mid + 1;
                res = max(res,mid-l+1);
            }
            else a2=mid-1;
        }
        cout << res << endl;
    }
    return 0;
}












// #include<bits/stdc++.h>
// #define ll long long
// #define pi pair<ll, ll>
// #define asort(v) sort(v.begin(), v.end())
// #define rsort(v) sort(v.begin(), v.end(), greater<>())
// #define yes cout << "YES\n"
// #define no cout << "NO\n"
// #define endl "\n"
// #define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

// using namespace std;
// int main()
// {
//     fast();
//     int t; cin >> t;
//     while (t--)
//     {
//         int l,r,k; cin >> l >> r >> k;
    
//         int cnt=0;
//         for(int i=l; i<=r; i++){
//             int mul=(r / i) - ((l - 1) / i);
//             if(mul>=k) cnt++;
//         }
//         cout << cnt << endl;
//     }
    
//     return 0;
// }
