// Reverse a Linked List
//TC: O(N)
//SC: O(1)
//LC 206

#include <iostream>
using namespace std;
 
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 


 class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)  return head;
        ListNode* temp=head;
        ListNode* prev=NULL;
        ListNode* front=NULL;
        while(temp!=NULL){
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        head=prev;
        return head;
    }
};