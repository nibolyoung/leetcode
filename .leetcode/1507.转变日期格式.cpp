/*
 * @lc app=leetcode.cn id=1507 lang=cpp
 *
 * [1507] 转变日期格式
 */

// @lc code=start
class Solution {
public:
    string reformatDate(string date) {
        string month[12]={"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        int loc1=date.find_first_of(' '),loc2=date.find_last_of(' ');
        string res=date.substr(loc2+1,date.length()-1-loc2)+"-";
        for(int i=0;i<12;i++){
            if(date.substr(loc1+1,loc2-1-loc1).compare(month[i])==0){
                if(i<9)  res+="0";
                res+=to_string(i+1);
                res+="-";
                break;
            }
        }
        string day="";
        for(int i=0;i<date.length();i++){
            if(date[i]>='0'&&date[i]<='9')  day+=date[i];
            else break;
        }
        if(day.length()==1)  day="0"+day;
        return res+day;
    }
};
// @lc code=end

