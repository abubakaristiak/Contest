//https://www.hackerrank.com/contests/intra-phitron-programming-conctest-batch-5-easy-level/challenges/say-no-to-duplicate
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for(int i=0; i<n; i++){
            cin >> ar[i];
        }
        sort(ar, ar+n);
        for(int i=0; i<n; i++){
            if(i==0 || ar[i] != ar[i-1]){
                if(i!=0){
                    cout <<" ";
                }
                cout << ar[i];
            }
        }
        cout << endl;
    }
    
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int ar[n];
//         for (int i = 0; i < n; i++) {
//             cin >> ar[i];
//         }
        
//         // Sort the array
//         sort(ar, ar + n);

//         // Print unique elements in non-decreasing order
//         for (int i = 0; i < n; i++) {
//             // Skip duplicates
//             if (i == 0 || ar[i] != ar[i - 1]) {
//                 if (i != 0) cout << " ";
//                 cout << ar[i];
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }
