#include<bits/stdc++.h>
using namespace std;
int findWrappers(int wrappers){
    if(wrappers < 3) return 0;

    int add_cho = wrappers/3;
    int con_wrap = wrappers%3;
    return add_cho + findWrappers(add_cho + con_wrap);

}
int main()
{
    int t;
    cin >>  t;
    while (t--)
    {
        int money;
        cin >> money;

        int chocolates = money/5;
        int total_cho = chocolates + findWrappers(chocolates);

        cout << total_cho << endl;
    }
    
    return 0;
}