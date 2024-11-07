// https://codeforces.com/contest/2036/problem/C


#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        string x="1100";
        set<int> st;
        int q;
        cin >> q;
        for(int i=0; i<s.size()-3; i++){
            if(s.substr(i,4)==x){
                st.insert(i);
            }
        }
        while (q--)
        {
            int idx;
            char val;
            cin >> idx >> val;
            idx--;
            s[idx]=val;
            if(s.size()<4) cout << "NO" << endl;
            else{
                for(int j=idx-3; j<=idx; j++){
                    if(j>=0 && j<=s.size()-4){
                        if(s.substr(j,4)==x){
                            st.insert(j);
                        }
                        else{
                            st.erase(j);
                        }
                    }
                }
                if(st.size()==0){
                    cout << "NO" << endl;
                }else{
                    cout << "YES" << endl;
                }
            }
            
        }
        
    }
    
    return 0;
}




































// TLE test case 03
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t; cin >> t;
//     while (t--){
//         string s; cin >> s;
//         string x="1100";
//         int q; cin >> q;
//         while (q--)
//         {
//             int idx;
//             char val;
//             cin >> idx >> val;
//             idx--;
//             s[idx]=val;
//             bool flag=false;
//             for(int i=0; i<s.size()-3; i++){
//                 if(s.substr(i,4)==x){
//                     flag=true;
//                     break;
//                 }
//             }
//             if(flag) cout << "YES" << endl;
//             else cout << "NO" << endl;

//         }
//     }
//     return 0;
// }