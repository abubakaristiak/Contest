//https://www.hackerrank.com/contests/intra-phitron-programming-conctest-batch-5-easy-level/challenges/chocolate-paradox
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a,b, T;
//     cin>> a >>b >> T;
//     int sum = a+b;
//     if(sum <=T){
//         cout << "YES";
//     }
//     else{
//         cout << "NO";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int gcd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// int main() {
//     int x, y, T;
//     cin >> x >> y >> T;

//     int final_gcd = gcd(x, y);  

//     if (T % final_gcd == 0) cout << "YES" << endl;
//     else cout << "NO" << endl;

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int x,y,t;
    cin >> x >> y >> t;
    bool ar[10001] = {false}; 
    ar[0] = true;  

    for (int i = 0; i <= t; i++) {
        if (ar[i]) {
            if (x+i <= t) ar[x+i] = true;
            if (y+i <= t) ar[y+i] = true;
        }
    }
    if (ar[t]) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}





