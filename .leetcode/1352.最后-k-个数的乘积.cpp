/*
 * @lc app=leetcode.cn id=1352 lang=cpp
 *
 * [1352] 最后 K 个数的乘积
 */

// @lc code=start
class ProductOfNumbers {
    vector<int> s;
public:
    ProductOfNumbers() {
        s.clear();
    }
    
    void add(int num) {
        s.push_back(num);
    }
    
    int getProduct(int k) {
        int res=1;
        for(int i=s.size()-1;i>=s.size()-k;i--)  res*=s[i];
        return res;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
// @lc code=end

