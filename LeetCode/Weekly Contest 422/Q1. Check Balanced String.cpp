//https://leetcode.com/contest/weekly-contest-422/problems/check-balanced-string/description/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isBalanced(string num) {
        int oddsum=0, evensum=0;
        for(int i=0; i<num.size(); i++){
            if(i%2==0){
                evensum+=num[i]-'0';
            }else{
                oddsum+=num[i]-'0';
            }
        }return oddsum==evensum;
    }
};