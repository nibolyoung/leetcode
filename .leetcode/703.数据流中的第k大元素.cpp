/*
 * @lc app=leetcode.cn id=703 lang=cpp
 *
 * [703] 数据流中的第K大元素
 */

// @lc code=start
class KthLargest {
    vector<int> s;
    map<int,bool> p;
    int no;
public:
    KthLargest(int k, vector<int>& nums) {
        for(auto n:nums){
            if(!p[n]){
                s.push_back(n);
                p[n]=true;
            }
        }
        no=k;
    }
    
    int add(int val) {
        if(p[val])  return s[no-1];
        p[val]=true;
        s.push_back()
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
// @lc code=end

