/*
 * @lc app=leetcode.cn id=445 lang=cpp
 *
 * [445] 两数相加 II
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
    string bigNumberPlus(string s, string t){
        string temp="";
        if(s.length()>t.length()){
            for(int i=0;i<s.length()-t.length();i++)  temp+="0";
            t=temp+t;
        }else if(s.length()<t.length()){
            for(int i=0;i<t.length()-s.length();i++)  temp+="0";
            s=temp+s;
        }
        string res = "";
        int jin = 0;
        for (int i = s.length() - 1; i >= 0; i--){
            int num = (int)(s[i] - 48) + (int)(t[i] - 48);
            if (i > 0){
                res=to_string((num + jin) % 10)+res;
                jin = (num + jin - (num + jin) % 10) / 10;
            }else res=to_string(num + jin)+res;
        }
        return res;
    }
    void addAtHead(ListNode* &p,int x){
        ListNode* tmp=new ListNode(x);
        tmp->next=p;
        p=tmp;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res=NULL;
        string p="",q="";
        while(l1){
            p+=(char)(l1->val+48);
            l1=l1->next;
        }
        while(l2){
            q+=(char)(l2->val+48);
            l2=l2->next;
        }
        p=bigNumberPlus(p,q);
        reverse(p.begin(),p.end());
        for(int i=0;i<p.length();i++)  addAtHead(res,(int)(p[i]-48));
        return res;
    }
};
// @lc code=end

