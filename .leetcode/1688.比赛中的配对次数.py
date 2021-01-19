#
# @lc app=leetcode.cn id=1688 lang=python3
#
# [1688] 比赛中的配对次数
#

# @lc code=start
class Solution:
    def numberOfMatches(self, n: int) -> int:
        sum = 0
        while n > 1:
            sum += (n//2 if n%2==0 else n//2)
            n = (n//2 if n%2==0 else n//2+1)
        return sum 

# @lc code=end

