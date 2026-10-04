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
    ListNode* reverseList(ListNode* head) {
        
        if(head == nullptr || head->next == nullptr){

            return head;
        }

        vector<int> list;

        ListNode* temp = head;

        while(temp != nullptr){

            list.push_back(temp->val);

            temp = temp->next;
        }

        int n = list.size();

        temp = head;

        while(temp != nullptr){

            temp->val = list[n - 1];

            temp = temp->next;

            n--;
        }

        return head;
    }
};