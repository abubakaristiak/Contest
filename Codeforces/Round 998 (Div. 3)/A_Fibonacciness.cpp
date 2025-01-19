#include<bits/stdc++.h>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;
void solve(){
    int frist, second, forth, fifth;
    cin >> frist >> second >> forth >> fifth;

    int third_tmp1=frist+second;
    int third_tmp2=fifth-forth;
    int third_tmp3=forth-second;
    vector<int> third_tmp_all = {third_tmp1, third_tmp2, third_tmp3};
    int mxCnt=0;
    for(auto third:third_tmp_all){
        int cnt=0;
        if(third==frist+second){
            cnt++;
        }if(forth==second+third){
            cnt++;
        }if(fifth==third+forth){
            cnt++;
        }
        mxCnt=max(mxCnt, cnt);
    }
    cout << mxCnt << endl;
}
int main()
{
    fast();
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;


// Alhamdulillah
}