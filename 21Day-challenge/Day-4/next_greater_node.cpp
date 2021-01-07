  /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
     
       vector<int> res, stack;
  for (auto p = head; p != nullptr; p = p->next) res.push_back(p->val);
  for (int i = res.size() - 1; i >= 0; --i) {
    auto val = res[i];
    while (!stack.empty() && stack.back() <= res[i]) stack.pop_back();
    res[i] = stack.empty() ? 0 : stack.back();
    stack.push_back(val);
  }
  return res;
      
        
    }
};