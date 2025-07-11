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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=head;
        int cnt=0;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        if(head->next==NULL){
            if(n==1) return NULL;
        }
        if(cnt==n){
            ListNode* temp=head->next;
            return temp;
        }
        int res=cnt-n;
        ListNode* temp2=head;
        while(res!=1){
            res--;
            temp2=temp2->next;
        }
        temp2->next=temp2->next->next;
        return head;
        


        
    }
};