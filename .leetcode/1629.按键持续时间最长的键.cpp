/*
 * @lc app=leetcode.cn id=1629 lang=cpp
 *
 * [1629] 按键持续时间最长的键
 */

// @lc code=start
class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        char resKey = keysPressed[0];
	    int resTime = releaseTimes[0];
	    for (int i = 1; i < releaseTimes.size(); i++) {
		    int curTime = releaseTimes[i] - releaseTimes[i - 1];
		    if (curTime >= resTime) {
			    if (curTime == resTime)
				    resKey = max(resKey, keysPressed[i]);
			    else {
				    resKey = keysPressed[i];
				    resTime = curTime;
			    }
		    }
	    }
	    return resKey;
    }
};
// @lc code=end

