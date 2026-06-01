// Delete Node in a Linked List
//TC: O(1)
//SC: O(1)
//LC 237

#include <iostream>
using namespace std;
 
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
    };
 
class Solution {
public:
    void deleteNode(ListNode* node) {
        *node=*node->next;
    }
};