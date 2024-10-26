//https://codeforces.com/contest/2033/problem/0

#include<bits/stdc++.h>
using namespace std;

void solve(int n){
    int curPos=0;
    int mvNum=1;
    int step=1;

    while(true){
        int mv=2*mvNum-1;
        if(mvNum%2 != 0){
            curPos-=mv;
            if(abs(curPos)>n){
                cout << "Sakurako" << endl;
                return;
            }
        }
        else{
            curPos+=mv;
            if(abs(curPos)>n){
                cout << "Kosuke" << endl;
                return;
            }
        }
        mvNum++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    vector<int> v(t);
    for(int i=0; i<t; i++){
        cin >> v[i];
    }

    for(int i=0; i<t; i++){
        solve(v[i]);
    }

    
    return 0;
}