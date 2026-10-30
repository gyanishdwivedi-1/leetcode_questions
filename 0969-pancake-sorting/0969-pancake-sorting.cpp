class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        int n = arr.size();
        vector<int> v;

        priority_queue<int> pq;
        for(int i = 0; i < n; i++){
            pq.push(arr[i]);
        }

        while(n > 1){
            int top = pq.top();
            pq.pop();

            int j = 0;
            while(j < n && arr[j] != top){
                j++;
            }

            if(j == n) continue;

            if(j != 0){
                v.push_back(j + 1);

                int a = 0, b = j;
                while(a < b){
                    swap(arr[a], arr[b]);
                    a++;
                    b--;
                }
            }

            v.push_back(n);

            int a = 0, b = n - 1;
            while(a < b){
                swap(arr[a], arr[b]);
                a++;
                b--;
            }

            n--;
        }

        return v;
    }
};