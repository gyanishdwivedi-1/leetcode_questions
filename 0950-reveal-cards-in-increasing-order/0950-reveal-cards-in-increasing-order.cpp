class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        
        sort(deck.begin(),deck.end());
        int n=deck.size();
        if(n==1) return deck;
        vector<int>ans(n);

        queue<int> q;
        for(int i=0;i<n;i++) q.push(i);

        int j=0;
        while(!q.empty()){
            ans[q.front()]=deck[j++];   // reveal
            q.pop();
            if(!q.empty()){             // agla neeche
                q.push(q.front());
                q.pop();
            }
        }
        return ans;
    }
};