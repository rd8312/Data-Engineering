//  Definition for singly-linked list.
# include<stdlib.h>
# include<stdio.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* result, *tmp, *prev;
    int carry = 0; int count = 0;
  while(l1 || l2 || carry) {
    int val1 = 0, val2 = 0, val3 = 0;
    if (l1) {
      val1 = l1->val;
      l1 = l1->next;
    }
    if (l2) {
      val2 = l2->val;
      l2 = l2->next;
    }
    val3 = val1 + val2 + carry;
    carry = val3 / 10;
    tmp = (struct ListNode *) malloc(sizeof(struct ListNode));
    tmp->val = val3 % 10; 
    tmp->next = NULL;
    
    if (!count)
      result = tmp;
    else
      prev->next = tmp;
    
    prev = tmp;
    count++;
  }
  return result;
}