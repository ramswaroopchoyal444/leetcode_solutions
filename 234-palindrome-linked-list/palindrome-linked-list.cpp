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
    bool isPalindrome(ListNode* head) {

        if(head == nullptr ||  (*head).next == nullptr){
            return true;
        }

        vector<int> forward, backward;

        ListNode* temp = head;

        while(temp != nullptr){

            forward.push_back(temp->val);

            temp = temp->next;
        }

        for(int i = forward.size() - 1; i >= 0; i--){

            backward.push_back(forward[i]);
        }
        
        if(forward == backward){

            return true;
        }else{

            return false;
        }
        
    }
};