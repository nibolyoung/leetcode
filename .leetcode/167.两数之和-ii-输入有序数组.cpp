/*
 * @lc app=leetcode.cn id=167 lang=cpp
 *
 * [167] 两数之和 II - 输入有序数组
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int> p;
        for(int i=0;i<numbers.size();i++){
            if(numbers[i]*2==target&&p[numbers[i]]>0)
                return {p[numbers[i]],i+1};
            p[numbers[i]]=i+1;
        }
        for(auto it=p.begin();it!=p.end();++it){
            if(p[target-it->first]>0){
                int loc1=p[target-it->first];
                int loc2=p[it->first];
                return {min(loc1,loc2),max(loc1,loc2)};
            }
        }
        return {};
    }
};
// @lc code=end

