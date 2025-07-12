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
    ListNode* MiddleNode(ListNode*head){
        ListNode*slow=head;
        ListNode*fast=head;
        fast=fast->next;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    
    ListNode* merge2Lists(ListNode* left, ListNode* right){
        ListNode* L1= left;
        ListNode* L2= right;
        ListNode* dummyNode= new ListNode(-1);
        ListNode* temp=dummyNode;
        while(L1 != NULL && L2!= NULL){
            if(L1->val < L2-> val){
                temp->next= L1;
                temp=L1;
                L1=L1->next;
            }
            else {
                temp->next=L2;
                temp=L2;
                L2=L2->next;
            }
        }
        if(L1) temp->next= L1;
        else temp->next=L2;

        return dummyNode->next;
    }
    ListNode* sortList(ListNode* head) {
        //Sorting with O(NlogN+N) TC and O(N) SC
        // ListNode* temp=head;
        // vector<int>vec;
        // while(temp){
        //     vec.emplace_back(temp->val);
        //     temp=temp->next;
        // }
        // sort(vec.begin(),vec.end());
        // ListNode* temp2=head;
        // int i=0;
        // while(temp2){
        //     temp2->val= vec[i];
        //     i++;
        //     temp2=temp2->next;

        // }
        // return head;

        //Using Merge sort
        if(head==NULL || head->next==NULL) return head;
        ListNode* middle= MiddleNode(head);
        ListNode*left= head;
        ListNode* right= middle->next;
        middle->next=NULL;

        left=sortList(left);
        right=sortList(right);
        return merge2Lists(left,right);




    }
};