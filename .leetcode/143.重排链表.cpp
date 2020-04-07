/*
 * @lc app=leetcode.cn id=143 lang=cpp
 *
 * [143] 重排链表
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
public:
    void reorderList(ListNode* head) {
        if (!head) return;
		ListNode p(-1);
		p.next = head;
		ListNode *p1 = &p, *p2 = &p;
		for (; p2 && p2->next; p1 = p1->next, p2 = p2->next->next);
		for ( ListNode *prev = p1, *curr = p1->next; curr && curr->next; ){
			ListNode *tmp = curr->next;
			curr->next = curr->next->next;
			tmp->next = prev->next;
			prev->next = tmp;
		}
		for ( p2 = p1->next, p1->next = NULL,p1 = head; p2; ){
			ListNode *tmp = p1->next;
			p1->next = p2;
			p2 = p2->next;
			p1->next->next = tmp;
			p1 = tmp;
		}
    }
};
// @lc code=end

