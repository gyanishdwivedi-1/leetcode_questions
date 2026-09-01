class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        // vector<int>prefix(n,0);
        // prefix[0]=arr[0];
        // int sum=arr[0];
        // for(int  i=1;i<n;i++){
        //     prefix[i]=prefix[i-1]+arr[i];
        //     sum+=arr[i];
        // }
        int anssum=0;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                 sum+=arr[j];
                if((j-i)%2==0){
                    anssum+=sum;
                }
               
            }
        }
        return anssum;
    }
};