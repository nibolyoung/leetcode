/*
 * @lc app=leetcode.cn id=25 lang=cpp
 *
 * [25] K 个一组翻转链表
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
        if(p!=NULL)  tmp->next=p;
        p=tmp;
    }
    void listCombine(ListNode* &p,ListNode* &q){
        if(p==NULL)  p=q;
        else{
            ListNode* tmp=p;
            while(tmp->next!=NULL)  tmp=tmp->next;
            tmp->next=q;
        }
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)  return head;
        ListNode* list=NULL;
        ListNode* tmp=NULL;
        int i=0;
        while(head!=NULL){
            i++;
            addAtHead(tmp,head->val);
            head=head->next;
            if(i==k){
                i=0;
                listCombine(list,tmp);
                tmp=NULL;
            }
        }
        if(i>0){
            ListNode* last=NULL;
            while(tmp!=NULL){
                addAtHead(last,tmp->val);
                tmp=tmp->next;
            }
            listCombine(list,last);
        }
        return list;
    }
};
// @lc code=end

