// https://www.codechef.com/problems/EVENODDDIV

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 
    while (t--)
    {
        int a; cin >> a;
        int evenCnt=0, oddCnt=0;
        for(int i=1; i<=a; i++){
            if(a%i == 0){
                if(i%2==0){
                    evenCnt++;
                }else{
                    oddCnt++;
                }
            }
        }
        if(evenCnt > oddCnt) cout << 1 << endl;
        else if(evenCnt == oddCnt) cout << 0 << endl;
        else cout << -1 << endl;
    }
    
    return 0;
}



// Another Approach;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        if(n%2==1) cout << -1 << endl;
        else{
            if(n%4) cout << 0 << endl;
            else cout << 1 << endl;
        }
    }
    
    return 0;
}

