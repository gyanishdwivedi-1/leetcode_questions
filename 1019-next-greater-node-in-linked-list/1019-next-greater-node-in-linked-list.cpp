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
    vector<int> nextLargerNodes(ListNode* head) {
        stack<pair<int,int>>s;
        //vector<int>v;
        ListNode* tail=head;
        int n=0;
        while(tail!=NULL){
            n++;
            tail=tail->next;
        }
        vector<int>v(n,0);
        if(n==1){
            return {0};
        }
        ListNode* temp=head;
        int x=0;
        while(temp!=NULL){
            if(s.empty()){
                s.push({x,temp->val});
            }
         else if(s.top().second>temp->val){
                s.push({x,temp->val});
            }
        else if(s.top().second<=temp->val){
            while(!s.empty() && (s.top().second<temp->val)){
                    v[s.top().first]=temp->val;
                    s.pop();
            }
            s.push({x,temp->val});
        }
            temp=temp->next;
            x++;
        }
        return v;
    }
};