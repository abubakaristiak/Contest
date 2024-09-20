#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long> ar(n), prefix_sum(n);

    for(int i=0; i<n; i++){
        cin >> ar[i];
    }

    prefix_sum[0] = ar[0];
    for(int i=1; i<n; i++){
        prefix_sum[i] = prefix_sum[i-1] + ar[i];
    }

    int t;
    cin >> t;
    while (t--)
    {
        long long int sum;
        cin >> sum;
        int ans = -1;
        
        int low = 0, high = n-1;
        while (low <= high)
        {
            int mid = (low + high)/2;
            if(prefix_sum[mid] >= sum){
                ans = mid+1;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        
        cout << ans << '\n';

          
    }
    
    return 0;
}