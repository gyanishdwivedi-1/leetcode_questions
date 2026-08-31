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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>v(2,-1);
        //if(head->next==NULL || head->next->next=NULL) return v;
        ListNode* temp=head;
        ListNode* prev=temp;
        int i=1;
        vector<int>ans;
        while(temp!=NULL){
            prev=temp;
            temp=temp->next;
            if(temp && temp->next){
                if(prev->val<temp->val && temp->val>temp->next->val){
                    ans.push_back(i);
                }
                else if(prev->val>temp->val && temp->val<temp->next->val){
                    ans.push_back(i);
                }
            }
            i++;
        }
        if(ans.size()<2){
            return v;
        }
        int mini=INT_MAX;
        for(int i=0;i<ans.size();i++){
            if(i+1<ans.size()){
                mini=min(mini,ans[i+1]-ans[i]);
            }
        }
        v[0]=mini;
        v[1]=ans[ans.size()-1]-ans[0];
        return v;
    }
};