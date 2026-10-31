class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size();
        vector<int>ex(n);
        for(int i=0;i<n;i++){
            ex[i]=heights[i];
        }
        sort(ex.begin(),ex.end());
        int count=0;
        for(int i=0;i<n;i++){
            if(ex[i]!=heights[i]) count++;
        }
        return count;
    }
};