// #include<bits/stdc++.h>
// using namespace std;
// void Check_hierarchy(const vector<int>& ep, int left, int right) {
//     if (left > right) return;
//     int mid = (left + right) / 2;
//     cout << ep[mid] << " ";
    
//     Check_hierarchy(ep, left, mid - 1);  
//     Check_hierarchy(ep, mid + 1, right); 
// }
// int main()
// {
//     int n;
//     cin >> n;
    
//     int t_eps = (1 << n) - 1;
//     vector<int> ep(t_eps);
    
//     for (int i = 0; i < t_eps; i++) {
//         cin >> ep[i];
//     }

//     Check_hierarchy(ep, 0, t_eps-1);
//     return 0;
// }

