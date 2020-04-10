/*
 * @lc app=leetcode.cn id=1299 lang=cpp
 *
 * [1299] 将每个元素替换为右侧最大元素
 */

// @lc code=start
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> s(arr.size());
        for(int i=0;i<arr.size();i++){
            if(i==arr.size()-1)  s[i]=-1;
            else{
                int max=arr[i+1];
                for(int j=i+1;j<arr.size();j++){
                    if(arr[j]>max)  max=arr[j];
                }
                s[i]=max;
            }
        }
        return s;
    }
};
// @lc code=end

