/*
 * @lc app=leetcode.cn id=23 lang=cpp
 *
 * [23] 合并K个排序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    void addList(ListNode* &p,int val){
        ListNode* tmp=new ListNode(val);
        if(p==NULL)  p=tmp;
        else{
            ListNode* q=p;
            while(q->next)  q=q->next;
            q->next=tmp;
        }
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> s;
        for(auto list:lists){
            while(list){
                s.push_back(list->val);
                list=list->next;
            }
        }
        ListNode* res=NULL;
        sort(s.begin(),s.end());
        for(auto i:s)  addList(res,i);
        return res;
    }
};
// @lc code=end

