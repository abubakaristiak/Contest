#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string name;
    cin >> name;


    int len = name.length();

    for(int i=0; i<len; i++){
        name[i] = tolower(name[i]);
    }
    for(int i=len-1; i>=0; i--){
        cout << name[i];
    }
    return 0;
}