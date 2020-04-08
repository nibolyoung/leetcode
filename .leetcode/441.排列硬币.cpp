/*
 * @lc app=leetcode.cn id=441 lang=cpp
 *
 * [441] 排列硬币
 */

// @lc code=start
class Solution {
public:
    int arrangeCoins(int n) {
        if(n<=1)  return n;
        long i=1,add=2;
        while(i<=n){
            if(n>=i&&n<i+add)  return add-1;
            i+=add;
            add++;
        }
        return 0;
    }
};
// @lc code=end

