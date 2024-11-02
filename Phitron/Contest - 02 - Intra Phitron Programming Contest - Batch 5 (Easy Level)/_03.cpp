#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,z;
    cin >> x >> y >> z;

    double ori_price = x / (1 - y/100);
    double pro_price = ori_price*(1+z/100);
    cout <<fixed << setprecision(2) << pro_price;
    return 0;
}
