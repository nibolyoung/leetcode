/*
 * @lc app=leetcode.cn id=1700 lang=cpp
 *
 * [1700] 无法吃午餐的学生数量
 */

// @lc code=start
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue q(deque<int>(students.begin(), students.end()));
        int index=0,cnt= 0;
        while(!q.empty()){
            int curr= q.front();
            q.pop();
            if(curr != sandwiches[index]) cnt++,q.push(curr);
            else cnt= 0,index++;
            if(cnt== q.size()) break;
        }
        return q.size();
    }
};
// @lc code=end

