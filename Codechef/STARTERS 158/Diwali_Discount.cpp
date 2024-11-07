// https://www.codechef.com/problems/DIWALIDISC

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b;
    cin >> a >> b;
    if(a<b){
        cout << 0 << endl;
        return 0;
    }
    int ans = a-b;
    cout << ans << endl;
    return 0;
}