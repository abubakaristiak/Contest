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
    int t; cin>> t;
    while (t--)
    {
        ll l,r,x; cin >> l >> r >> x;
        unordered_set<int> res;
        for(int i=l; i<=r; i++){
            res.insert(i^x);
        }
        int m=0;
        while (res.count(m))
        {
            m++;
        }
        cout << m << endl;
        
    }
    
    return 0;


// Alhamdulillah
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
// int check_mex(set<int>&st){
//     int mex=0;
//     while (st.count(mex)){
//         mex++;
//     }return mex;
    
// }
// int main()
// {
//     fast();
//     int t; cin >> t;
//     while (t--)
//     {
//         ll l,r,x; cin >> l >> r >> x;
//         set<int>st;
//         for(int i=l; i<=r; i++){
//             st.insert(i^x);
//         }
//         cout << check_mex(st) << endl;
//     }
    
//     return 0;


// // Alhamdulillah
// }



