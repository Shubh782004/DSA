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
        //USING STACK with TC-->O(2N) and SC-->O(N)
        // stack<int>st;
        // ListNode* temp=head;
        // while(temp){
        //     st.push(temp->val);
        //     temp=temp->next;
        // }
        // ListNode* temp1=head;
        // while(temp1){
        //     temp1->val=st.top();
        //     st.pop();
        //     temp1=temp1->next;
        // }
        // return head;

        //Using Iteration
        // ListNode* prev=NULL;
        // ListNode* temp=head;
        // while(temp){
        //     ListNode* front= temp->next;
        //     temp->next=prev;
        //     prev=temp;
        //     temp=front;
        // }
        // return prev;
        
        //Recursion
        if (head==NULL || head->next == NULL){
            return head;
        }
        ListNode* newHead= reverseList(head->next);
        ListNode* front= head->next;
        front->next=head;
        head->next= NULL;
        return newHead;
    }
};