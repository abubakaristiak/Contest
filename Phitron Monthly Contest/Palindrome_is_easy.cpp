#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    cin >> len;
    string s;
    cin >> s;
    vector<vector<int>> fr(26, vector<int>(len+1, 0));

    for(int i=0; i<len; i++){
        for(int j=0; j<26; j++){
            fr[j][i+1] = fr[j][i];
        }
        fr[s[i] - 'a'][i+1]++;
    }

    
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int l,r,k;
        cin >> l >> r >>k;
        l--;
        r--;

        int odd_cnt = 0;
        for (int c=0; c<26; c++) {
            int charCount = fr[c][r+1] - fr[c][l];
            if (charCount%2 != 0) {
                odd_cnt++;
            }
        }

        if(odd_cnt/2 <= k) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}