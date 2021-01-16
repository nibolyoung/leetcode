/*
 * @lc app=leetcode.cn id=1712 lang=cpp
 *
 * [1712] 将数组分成三个子数组的方案数
 */

// @lc code=start
class Solution {
public:
    typedef long long ll;
    const ll MOD = 1e9+7;
    int waysToSplit(vector<int>& nums) {
        int n = nums.size();
        ll res = 0;
        vector<int> s(n+1);
        for(int i=1; i<=n; i++) s[i] = s[i-1] + nums[i-1];
        for(int i=3, x=2, y=2; i<=n; i++){
            while(s[n] - s[i-1] < s[i-1] - s[x-1])  x++;
            while(y+1 < i && s[i-1] - s[y] >= s[y])  y++;
            if(x<=y && s[n] - s[i-1] >= s[i-1] - s[y-1] && s[i-1] - s[x-1] >= s[x-1])
                res = (res + y-x+1) % MOD;
        }
        return res;
    }
};
// @lc code=end

