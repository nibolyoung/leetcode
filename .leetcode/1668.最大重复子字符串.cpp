/*
 * @lc app=leetcode.cn id=1668 lang=cpp
 *
 * [1668] 最大重复子字符串
 */

// @lc code=start
class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int k = 0;
		string s = word;
		while(sequence.find(s) != string::npos){
			s += word;
			k++;
		}
		return k;
    }
};
// @lc code=end

