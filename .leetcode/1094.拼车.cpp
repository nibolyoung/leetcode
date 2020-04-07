/*
 * @lc app=leetcode.cn id=1094 lang=cpp
 *
 * [1094] 拼车
 */

// @lc code=start
class Solution {
    static bool cmp(vector<int> a,vector<int> b){
        return a[1]<b[1];
    }
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        if(trips.size()==0)  return true;
        if(trips.size()==1)  return trips[0][0]<=capacity;
        sort(trips.begin(),trips.end(),cmp);
        int passages = trips[0][0];
        int n = trips.size();
        for(int i =1;i<n;i++){
            for(int j=0;j<i;j++){
                if(trips[i][1]>=trips[j][2]){
                    passages -= trips[j][0];
                    trips[j][0] = 0;
                    if(passages<0) passages = 0;
                }
            }
            passages += trips[i][0];
            if(passages>capacity) return false;
        }
        return true;
    }
};
// @lc code=end

