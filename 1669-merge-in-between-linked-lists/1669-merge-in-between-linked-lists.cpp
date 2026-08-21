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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int i=0;
        int j=0;
        ListNode* temp1=list1;
        ListNode* tail1=list1;
        while(i<a || j<=b){
            if(i<a-1){
                tail1=tail1->next;
            }
            temp1=temp1->next;
            i++;
            j++;
        }
        tail1->next=list2;
        ListNode* tail2=list2;
        ListNode* z=list2;
        while(tail2!=NULL){
            z=tail2;
            tail2=tail2->next;
        }
    z->next=temp1;
    return list1;
    }
};