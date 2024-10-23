//https://www.codechef.com/START157D/problems/ABNOMAT

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >>t;
    while(t--){
        int n,m; cin >>n >> m;
        string a,b; cin >>a >> b;
        set<char>st;
        for(int i=0; i<a.size(); i++){
            st.insert(a[i]);
        }
        for(int i=0; i<b.size(); i++){
            st.insert(b[i]);
        }

        bool flag=true;
        for(char ch='a'; ch<='z'; ch++){
            if(st.find(ch)==st.end()){
                flag=false;
                break;
            }
        }
        if(flag) cout <<"No" << endl;
        else cout << "Yes" << endl;

    }    
    return 0;
}