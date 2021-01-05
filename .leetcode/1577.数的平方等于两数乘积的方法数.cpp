/*
 * @lc app=leetcode.cn id=1577 lang=cpp
 *
 * [1577] 数的平方等于两数乘积的方法数
 */

// @lc code=start
class Solution {
public:
    typedef long long ll;
    int helperFunction(vector<int> & nums1, vector<int> & nums2){
        unordered_map<ll, int> set;
        for(int i : nums1){
            ll sq = (ll) i * i;
            set[sq]++;
        }
        int res = 0;
        for(int i = 0; i < nums2.size(); i++){
            for(int j = i + 1; j < nums2.size(); j++){
                ll val = (ll) nums2[i] * nums2[j];
                if(set.find(val) != set.end()){
                    res = res + set[val];
                }
            }
        }
        return res;        
    }
    int numTriplets(vector<int>& nums1, vector<int>& nums2) {
        return helperFunction(nums1, nums2) + helperFunction(nums2, nums1);
    }
};
// @lc code=end

