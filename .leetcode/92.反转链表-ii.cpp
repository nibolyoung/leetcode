/*
 * @lc app=leetcode.cn id=92 lang=cpp
 *
 * [92] 反转链表 II
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
    void addAtHead(ListNode* &p,int val){
        ListNode* tmp=new ListNode(val);
        tmp->next=p;
        p=tmp;
    }
    void addAtTail(ListNode* &p,int val){
        ListNode* tmp=new ListNode(val);
        if(p==NULL)  p=tmp;
        else{
            ListNode* q=p;
            while(q->next!=NULL)  q=q->next;
            q->next=tmp;
        }
    }
    void combineList(ListNode* &p,ListNode* &q){
        if(q==NULL||p==NULL)  p=q;
        else{
            ListNode* tmp=p;
            while(tmp->next!=NULL)  tmp=tmp->next;
            tmp->next=q;
        }
    }
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        int i=0;
        ListNode* p=NULL;
        ListNode* q=NULL;
        while(head!=NULL){
            i++;
            if(i<m)  addAtTail(p,head->val);
            else if(i>=m&&i<n)  addAtHead(q,head->val);
            else if(i==n){
                addAtHead(q,head->val);
                combineList(p,q);
            }else addAtTail(p,head->val);
            head=head->next;
        }
        return p;
    }
};
// @lc code=end

