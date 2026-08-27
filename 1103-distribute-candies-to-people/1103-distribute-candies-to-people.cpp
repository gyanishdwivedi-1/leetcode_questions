class Solution {
public:
    vector<int> distributeCandies(int can, int num_people) {
        int n=num_people;
        vector<int>v(n,0);
        int x=0;
        while(can!=0){
          int a=x%n;
          if(can>x){
            v[a]+=x+1;
            can=can-(x+1);
          } 
          else{
            int y=can;
            v[a]+=can;
            can=can-y;
          } 
          x++;
        }
        return v;
    }
};