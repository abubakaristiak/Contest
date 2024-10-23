//https://www.codechef.com/problems/BFLY

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r,g,b;
        cin >> r >> g >> b;

        int b_max = max({r,g,b});
        if(2 * b_max <= (r+g+b)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}