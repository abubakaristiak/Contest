//https://www.codechef.com/problems/AP

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        if ((y - x) == (z - y)) {
            cout << 0 << endl;
        }
        else{
            if ((z - x) % 2 == 0) {
                int newY = (z + x) / 2;
                if ((newY - x == z - newY)) {
                    cout << 1 << endl;  
                    continue;
                }
            }
        cout << 1 <<endl;
        }
    }

    return 0;
}