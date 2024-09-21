// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;

//         int con=0, vol=0, di=0;
//         for(char ch : s){
//             if(isdigit(ch)) di++;
//             else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vol++;
//             else con++;
//         }

//         int box = (con+2)/3 + (vol+1)/2 + di;
//         cout << box << endl;
//     }
    
//     return 0;
// }   

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; 
    cin >> t; 
    while(t--){
        string s;
        cin >> s;

        int con = 0, vol = 0, di = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= '1' && s[i] <= '9') di++;
            else if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') vol++;
            else con++;
        }
        int t1 = INT_MAX;
        int t2 = INT_MAX;
        int t3 = INT_MAX;

        t1 = (con + 2) / 3;
        t2 = (vol + 1) / 2;
        t3 = di;

        vector<int>v{t1,t2,t3} ;
        int ans = INT_MAX ;
        for(int i=0; i<3; i++)
        {
            if(v[i] > 0) ans = min(ans,v[i]) ;
        }

        cout << ans << "\n";
    }

    return 0;
}