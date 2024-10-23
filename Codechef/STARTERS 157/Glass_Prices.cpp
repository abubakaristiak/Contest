//https://www.codechef.com/START157D/problems/GLPR

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b; cin >> a>>b;
    if(a*2 < b) cout << "PLASTIC" << endl;
    else cout << "METAL" << endl;
    return 0;
}