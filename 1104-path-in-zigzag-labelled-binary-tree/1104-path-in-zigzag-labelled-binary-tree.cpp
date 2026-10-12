class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
        int j=1;
        while(pow(2,j)<=label){
                j++;
        }
        vector<int>v;
        int i=j;
        v.push_back(label);
        while(i>=2){
         int x=pow(2,i-1);
         int b=(label-x)/2;
         int a=(x-b-1);
         v.push_back(a);
         label=a;
         i--;
        }
        reverse(v.begin(),v.end());
    return v;
    }
};