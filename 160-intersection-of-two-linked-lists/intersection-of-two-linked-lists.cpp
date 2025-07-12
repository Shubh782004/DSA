/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //USING HASHING
        map<ListNode*,int> mpp;
        ListNode* tempA= headA;
        ListNode* tempB= headB;
        while(tempA){
            mpp[tempA]=1;
            tempA=tempA->next;
        }
        while(tempB){
            if(mpp.find(tempB)!=mpp.end()){
                return tempB;
            }
            tempB=tempB->next;
        }
        return NULL;
    }
};