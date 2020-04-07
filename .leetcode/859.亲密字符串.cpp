/*
 * @lc app=leetcode.cn id=859 lang=cpp
 *
 * [859] 亲密字符串
 */

// @lc code=start
class Solution {
    bool hasSameChar(string s){
        if(s.length()>26)  return true;
        for(int i=0;i<s.length();i++){
            if((int)s.find(s[i])!=(int)s.find_last_of(s[i]))
                return true;
        }
        return false;
    }
public:
    bool buddyStrings(string A, string B) {
        if(A.length()==0&&B.length()==0)  return false;
        if(A.length()!=B.length())  return false;
        if(A==B)  return hasSameChar(A);
        int loc1,loc2,num=0;
        for(int i=0;i<A.length();i++){
            if(A[i]!=B[i]){
                num++;
                if(num==1)  loc1=i;
                else if(num==2)  loc2=i;
                else return false;
            }
        }
        if(num!=2)  return false;
        return A[loc1]==B[loc2]&&A[loc2]==B[loc1];
    }
};
// @lc code=end

