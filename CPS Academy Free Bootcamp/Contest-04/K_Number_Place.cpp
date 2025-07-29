/*
||-----------------------------------||
||        Abu Bakar Istiak           ||
||     Chattogram Polytechnic        ||
||        Department of CST          ||
||    abubakar119147@gmail.com       ||
||-----------------------------------||
*/
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ull unsigned long long
#define pi pair<ll, ll>
#define vi vector<ll>
#define vpi vector<pi>
#define pb push_back
#define endl "\n"
#define sp " "
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define sz(x) (ll)(x).size()
#define minus cout << -1 << endl
#define zero cout << 0 << endl
#define MAX 100000
#define MOD 998244353
#define afor(i,a,b) for (ll i = (a); i < (b); ++i)
#define rfor(i,a,b) for (ll i = (a); i >= (b); --i)
#define asort(v) sort((v).begin(), (v).end())
#define rsort(v) sort((v).begin(), (v).end(), greater<>())
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

bool isTrying(vector<vector<int>>& grid) {
    for(int i = 0; i < 9; i++) {
        set<int> row, col;
        for(int j = 0; j < 9; j++) {
            row.insert(grid[i][j]);
            col.insert(grid[j][i]);
        }
        if(row.size() != 9 || col.size() != 9){
            return false;
        }
    }
    for(int r = 0; r < 9; r += 3) {
        for(int c = 0; c < 9; c += 3) {
            set<int> block;
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    block.insert(grid[r+i][c+j]);
                }
            }
            if(block.size() != 9){
                return false;
            }
        }
    }

    return true;
}
void solve() {
    vector<vector<int>> grid(9, vector<int>(9));
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin >> grid[i][j];
        }
    }
    if(isTrying(grid)){
        cyes;
    }else cno;
        
}


int main() {
    fast();
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;

    // Alhamdulillah
}