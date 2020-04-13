/*
 * @lc app=leetcode.cn id=1408 lang=cpp
 *
 * [1408] 数组中的字符串匹配
 */

// @lc code=start
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> s;
        map<string,bool> p;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words.size();j++){
                if(i!=j&&words[i].length()>words[j].length()&&(int)(words[i].find(words[j]))>=0){
                    if(!p[words[j]]){
                        p[words[j]]=true;
                        s.push_back(words[j]);
                    }
                }
            }
        }
        return s;
    }
};
// @lc code=end

