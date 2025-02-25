    /*
    * Bismillahir Rahmanir Raheem
    *
    * * * * Coder   : abubakaristiak
    * * * * Created : 2025-02-25 || 10:05:16
    * * * * File    : Sum_of_Digits_156.cpp
    */



    #include<bits/stdc++.h>
    #include<ext/pb_ds/assoc_container.hpp>
    #include<ext/pb_ds/tree_policy.hpp>
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
    using namespace __gnu_pbds;
    using namespace std;

    template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
    bool isValid(string s) {
        stack<char> st;
        for (char ch:s) {
            if(ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }else {
                if (st.empty()) return false;
                char top = st.top();
                if ((ch == ')' && top != '(') || (ch == '}' && top != '{') || (ch == ']' && top != '[')) {
                    return false;
                }
                st.pop();
            }
        }
    
        return st.empty();
    }

    void solve()
    {
        string s; cin >> s;
        if(isValid){
            cout << "True" << endl;
        }else{
            cout << "False" << endl;
        }
    }


    int main()
    {
        fast();
        int t=1;
        while (t--) {
            solve();
        }

        return 0;


    // Alhamdulillah
    }