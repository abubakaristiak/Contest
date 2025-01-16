// /*
//  * Bismillahir Rahmanir Raheem
//  *
//  * * * * Coder   : abubakaristiak
//  * * * * Created : 2025-01-15 || 21:43:07
//  * * * * File    : Hamming_equivalent.cpp
//  */




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
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        bool ok=true;
        for(int i=0; i<n; i++){
            if(v[i]!=i+1){
                int x=__builtin_popcount(v[i]);
                int y=__builtin_popcount(i+1);
                if(x!=y){
                    ok=false;
                    break;
                }
            }
        }
        if(ok){
            cyes;
        }else cno;
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
// #define cyes cout << "Yes\n"
// #define cno cout << "No\n"
// #define endl "\n"
// #define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

// using namespace std;
// int cntBits(int num){
//     int cnt=0;
//     while (num)
//     {
//         cnt+=(num & 1);
//         num=num >> 1;
//     }
//     return cnt;
// }



// bool isSorted(vector<int> &v){
//     map<int, vector<int>> bg;
//     for(int i=0; i<v.size(); i++){
//         int sb=cntBits(v[i]);
//         bg[sb].push_back(i);
//     }
//     for(auto &[sb, idx]:bg){
//         vector<int> val;
//         for(int i:idx){
//             val.push_back(v[i]);
//         }
//         sort(val.begin(), val.end());
//         for(int i=0; i<idx.size(); i++){
//             v[idx[i]] = val[i];
//         }
//     }
//     for(int i=1; i<v.size(); i++){
//         if(v[i]<v[i-1]){
//             return false;
//         }
//     }
//     return true;
// }


// int main()
// {
//     fast();
//     int t; cin >> t;
//     while (t--)
//     {
//         int n; cin >> n;
//         vector<int> v(n);
//         for(int i=0 ;i<n; i++){
//             cin >> v[i];
//         }
//         cout << (isSorted(v) ? "Yes":"No") << endl; 
//     }
    
//     return 0;


// // Alhamdulillah
// }


