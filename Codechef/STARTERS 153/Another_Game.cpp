//https://www.codechef.com/problems/KARR


// TODO: Not Passed
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMinK(vector<int>& P, int N) {
    
    
    int max_val = *max_element(P.begin(), P.end());
    return max_val;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> P(N);
        for (int i = 0; i < N; ++i) {
            cin >> P[i];
        }
        cout << findMinK(P, N)+1 << endl;
    }
    return 0;
}















// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int findMinK(vector<int>& P, int N) {
//     int max_diff = 0;
//     for (int i = 1; i < N; ++i) {
//         max_diff = max(max_diff, abs(P[i] - P[i - 1]));
//     }
//     return max_diff + 1;
// }

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int N;
//         cin >> N;
//         vector<int> P(N);
//         for (int i = 0; i < N; ++i) {
//             cin >> P[i];
//         }
//         cout << findMinK(P, N) << endl;
//     }
//     return 0;
// }
