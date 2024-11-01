#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    string s; cin >> s;

    int zeroCnt=0, oneCnt=0;
    for(int i=0; i<n; i++){
        if(s[i]=='0') zeroCnt++;
        if(s[i]=='1') oneCnt++;
    }
    cout << zeroCnt << " " << oneCnt << endl;
    return 0;
}