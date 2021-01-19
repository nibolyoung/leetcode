#
# @lc app=leetcode.cn id=1656 lang=python3
#
# [1656] 设计有序流
#

# @lc code=start
class OrderedStream:

    def __init__(self, n: int):
        self.id = 1
        self.mp = {}
        self.cnt = n

    def insert(self, id: int, value: str) -> List[str]:
        self.mp[id] = value
        result = []
        while(self.id in self.mp.keys()):
            result.append(self.mp[self.id])
            self.id += 1
        return result



# Your OrderedStream object will be instantiated and called as such:
# obj = OrderedStream(n)
# param_1 = obj.insert(id,value)
# @lc code=end

