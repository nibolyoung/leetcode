/*
 * @lc app=leetcode.cn id=475 lang=cpp
 *
 * [475] 供暖器
 */

// @lc code=start
class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        int res = 0;
        long index = 0;
        long size = heaters.size();
        for (int i=0; i<houses.size(); i++) {
            int h = houses[i];
            int r = 0;
            if (index == size)  r = h - heaters[size-1];
            else {
                index = lower_bound(heaters.begin()+index, heaters.end(), h) - heaters.begin();
                if (index == size)  r = h - heaters[size-1];
                else if (index == 0)   r = heaters[0] - h;
                else  r = min(heaters[index] - h,h - heaters[index-1]);
            }
            res = max(r, res);
        }
        return res;
    }
};
// @lc code=end

