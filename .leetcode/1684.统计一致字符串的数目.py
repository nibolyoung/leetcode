#
# @lc app=leetcode.cn id=1684 lang=python3
#
# [1684] 统计一致字符串的数目
#

# @lc code=start
class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        return sum( set(word).issubset(set(allowed))  for word in words)
# @lc code=end

