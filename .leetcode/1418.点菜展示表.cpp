/*
 * @lc app=leetcode.cn id=1418 lang=cpp
 *
 * [1418] 点菜展示表
 */

// @lc code=start
class Solution {
    static int strToInt(string s){
        int res=0;
        for(int i=0;i<s.length();i++)  res+=(int)(s[i]-48)*pow(10,s.length()-1-i);
        return res;
    }
    static bool cmp(vector<string> s,vector<string> t){
        return strToInt(s[0])<strToInt(t[0]);
    }
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        vector<vector<string>> s;
        map<string,map<string,int>> p;
        map<string,bool> q;
        for(auto a:orders){
            p[a[1]][a[2]]++;
            q[a[2]]=true;
        }
        s.resize(p.size()+1);
        s[0].push_back("Table");
        for(auto i=q.begin();i!=q.end();++i)  s[0].push_back(i->first);
        int num=0;
        for(auto i=p.begin();i!=p.end();++i){
            num++;
            s[num].push_back(i->first);
            for(auto j=q.begin();j!=q.end();++j){
                s[num].push_back(to_string(p[i->first][j->first]));
            }
        }
        sort(s.begin()+1,s.end(),cmp);
        return s;
    }
};
// @lc code=end

