/*
 * @lc app=leetcode.cn id=1678 lang=cpp
 *
 * [1678] 设计 Goal 解析器
 */

// @lc code=start
class Solution {
public:
    string interpret(string command) {
        string s="",t="";
        for(char c:command){
            if(c=='G') s+="G";
            else if(c=='('||c=='a'||c=='l')  t+=c;
            else if(c==')'){
                if(t.length()==1)  s+="o";
                else s+="al";
                t="";
            }
        }
        return s;
    }
};
// @lc code=end

