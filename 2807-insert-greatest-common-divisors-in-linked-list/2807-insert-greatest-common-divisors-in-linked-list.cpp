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
    ListNode* gcd(int a,int b){
        int x=a;
        int y=b;
        if(a>b){
            y=a;
            x=b;
        }
        while(x!=0){
            int rem=y%x;
            y=x;
            x=rem;
        }
        ListNode* ans=new ListNode(y);
        return ans;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp=head;
        ListNode* curr=temp;
        ListNode* prev=temp;
        while(temp!=NULL){
            if(temp->next){
                curr=temp->next;
                ListNode* ans=gcd(temp->val,curr->val);
                temp->next=ans;
                ans->next=curr;
                temp=ans;
            }
            temp=temp->next;
            
        }
        return head;
    }
};