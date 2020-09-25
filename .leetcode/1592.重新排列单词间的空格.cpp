/*
 * @lc app=leetcode.cn id=1592 lang=cpp
 *
 * [1592] 重新排列单词间的空格
 */

// @lc code=start
class Solution {
public:
    string reorderSpaces(string text) {
        int spaceNum=0;
        vector<string> s;
        string tmp="";
        for(int i=0;i<text.length();i++){
            if(text[i]==' ') {
                spaceNum++;
                if(tmp.length()>0){
                    s.push_back(tmp);
                    tmp="";
                }
            }else tmp+=text[i];
        }
        if(spaceNum==0)  return text;
        if(tmp.length()>0)  s.push_back(tmp);
        cout<<s.size()<<endl;
        if(s.size()==1){
            for(int i=0;i<spaceNum;i++)  s[0]+=" ";
            return s[0];
        }
        int average=spaceNum/(s.size()-1)>0?spaceNum/(s.size()-1):spaceNum;
        int last=spaceNum>s.size()-1?spaceNum%(s.size()-1):0;
        string str_avg="",str_last="",res="";
        for(int i=0;i<average;i++)  str_avg+=" ";
        for(int i=0;i<last;i++)  str_last+=" ";
        for(int i=0;i<s.size();i++){
            if(i<s.size()-1){
                res+=s[i];
                res+=str_avg;
            }else res+=s[i];
        }
        res+=str_last;
        return res;
    }
};
// @lc code=end

