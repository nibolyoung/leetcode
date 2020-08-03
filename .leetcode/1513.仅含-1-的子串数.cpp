/*
 * @lc app=leetcode.cn id=1513 lang=cpp
 *
 * [1513] 仅含 1 的子串数
 */

// @lc code=start
class Solution {
public:
    long long int total(int n){
        long long int res=0;
        for(int i=1;i<=n;i++){
            res+=i;
        }
        return res;
    }
    int numSub(string s) {
        long long int ans = 0;
        for(int i=0;i<s.length();i++){
            int l =0;
            if(s[i]=='1'){
                l++;
                while(i+1<s.length() && s[i+1]!='0')
                    l++,i++;
            }
            ans+=total(l);
        }
        return ans%1000000007;
    }
};
// @lc code=end

