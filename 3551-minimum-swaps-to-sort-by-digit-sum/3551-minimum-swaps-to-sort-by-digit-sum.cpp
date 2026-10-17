class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n);
        vector<pair<int,int>> a;

        for(int i = 0; i < n; i++) {
            int x = nums[i];
            int sum = 0;

            while(x > 0) {
                int digit = x % 10;
                sum += digit;
                x = x / 10;
            }

            v[i] = sum;
            a.push_back({sum, nums[i]});
        }

        sort(a.begin(), a.end());

        vector<int> target(n);

        for(int i = 0; i < n; i++) {
            target[i] = a[i].second;
        }

        unordered_map<int,int> mp;

        for(int i = 0; i < n; i++) {
            mp[nums[i]] = i;
        }

        int ans = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] != target[i]) {
                int j = mp[target[i]];

                mp[nums[i]] = j;
                mp[target[i]] = i;

                swap(nums[i], nums[j]);
                ans++;
            }
        }

        return ans;
    }
};