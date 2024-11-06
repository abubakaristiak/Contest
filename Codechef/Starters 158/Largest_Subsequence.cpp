// https://www.codechef.com/problems/LARGESUB

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s;
        cin >> s;
        int cnt1=0, cnt2=0;
        for(int i=0; i<n; i++){
            if(s[i]=='a' && s[i+1]=='b'){
                cnt1++;
            }
            if(s[i]=='b' && s[i+1]=='a'){
                cnt2++;
            }
        }
        if(cnt1==cnt2) cout << n << endl;
        else{
            char first=s[0], last=s[n-1];
            int ans1=n, ans2=n;
            for(int i=0; i<n; i++){
                if(s[i]!=first){
                    break;
                }ans1--;
            }
            for(int i=n-1; i>=0; i--){
                if(s[i]!=last){
                    break;
                }ans2--;
            }
            cout << max(ans1,ans2) << endl;
        }
    }
    
    return 0;
}






// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t; cin >> t;
//     while (t--)
//     {
//         int n; cin >> n;
//         string s; cin >> s;
//         int ans=0;
//         for(int i=0; i<n; i++){
//             if(s[i]==s[0]){
//                 ans=max(ans,i+1);
//             }
//             if(s[i]==s[n-1]){
//                 ans=max(ans,n-i);
//             }
//         }
//         cout << ans << endl;
//     }
    
//     return 0;
// }

