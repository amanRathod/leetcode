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
   vector<ListNode*> splitListToParts(ListNode* root, int k) {
        int len = 0;
        // for (ListNode *x = root; x; ++len, x = x->next);
      ListNode* p = root;
      while(p != NULL){
        len++;
        p = p->next;
      }
    
        int n = len / k, r = len % k;
        vector<ListNode*> ret(k);
     
        for (int i = 0; i < k && root; ++i) {
            ret[i] = root;
    
          
            for (int j = 1; j < n + (i < r); ++j)
                root = root->next;
            ListNode *next = root->next;
            root->next = nullptr;
            root = next;
        }
        return ret;
    }
};