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
    ListNode* oddEvenList(ListNode* head) {
        // if(head==NULL || head->next==NULL) return head;
        // ListNode*oddtemp=head;
        // ListNode*eventemp=head->next;
        // vector<int>vec;
        // while(oddtemp!=NULL && oddtemp->next!=NULL){
        //     vec.push_back(oddtemp->val);
        //     oddtemp=oddtemp->next->next;
        // }
        // if(oddtemp) vec.push_back(oddtemp->val);
        // while(eventemp!=NULL && eventemp->next!=NULL){
        //     vec.push_back(eventemp->val);
        //     eventemp=eventemp->next->next;
        // }
        // if(eventemp) vec.push_back(eventemp->val);

        // ListNode*temp=head;
        // int i=0;
        // while(temp){
        //     temp->val=vec[i];
        //     i++;
        //     temp=temp->next;
        // }
        // return head;

        //Using constant space
        if(head==NULL || head->next==NULL) return head;
        ListNode* odd= head;
        ListNode* even= head->next;
        ListNode* evenHead= head->next;
        while(even!=NULL && even->next!=NULL){
            odd->next=odd->next->next;
            even->next=even->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=evenHead;
        return head;



        



    }
};