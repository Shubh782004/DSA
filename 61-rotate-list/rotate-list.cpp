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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        if(head==NULL || head->next==NULL || k==0) return head;
        int total_cnt=1;
        while(temp->next){
            total_cnt++;
            temp=temp->next;
        }
        
        if(k%total_cnt==0) return head;
        temp->next=head;

        k=k%total_cnt;
        int rem= total_cnt-k;
        ListNode* temp2=head;
        while(rem!=1){
            rem--;
            temp2=temp2->next;
        }
        head= temp2->next;
        temp2->next=NULL;


        return head;



        
    }
};