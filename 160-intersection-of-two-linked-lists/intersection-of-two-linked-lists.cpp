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
    // Using No of elements
    // ListNode* collisionPoint(ListNode* headA, ListNode* headB, int d){
    //     ListNode* tempA= headA;
    //     ListNode* tempB= headB;
    //     while(d){
    //         d--;
    //         tempB=tempB->next;
    //     }
    //     while(tempA!=tempB){
    //         tempA=tempA->next;
    //         tempB=tempB->next;
    //     }
    //     return tempA;

    // }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //USING HASHING
        // map<ListNode*,int> mpp;
        // ListNode* tempA= headA;
        // ListNode* tempB= headB;
        // while(tempA){
        //     mpp[tempA]=1;
        //     tempA=tempA->next;
        // }
        // while(tempB){
        //     if(mpp.find(tempB)!=mpp.end()){
        //         return tempB;
        //     }
        //     tempB=tempB->next;
        // }
        // return NULL;
        //Using No. of elements
        // ListNode*tempA= headA;
        // ListNode*tempB= headB;
        // int cntA=0, cntB=0;
        // while(tempA){
        //     cntA++;
        //     tempA=tempA->next;
        // }
        // while(tempB){
        //     cntB++;
        //     tempB=tempB->next;
        // }
        // if(cntA<cntB) return collisionPoint(headA , headB, cntB-cntA);
        // else return collisionPoint(headB , headA, cntA-cntB);


        //Using traversal
        ListNode*tempA= headA;
        ListNode*tempB= headB;
        if(headA==NULL || headB==NULL) return NULL;
        while(tempA!=tempB){
            tempA=tempA->next;
            tempB=tempB->next;
            if(tempA==tempB) return tempA;
            if(tempA==NULL) tempA= headB;
            if(tempB==NULL) tempB= headA;
        }
        return tempA;


    }
};