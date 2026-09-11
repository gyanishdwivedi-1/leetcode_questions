class Solution {
public:
    int count=0;

    void check(vector<int>& d, vector<int>& v,
               unordered_map<int,bool>& mp,
               vector<bool>& vis) {

        if(v.size() == 3) {

            int digit = v[0]*100 + v[1]*10 + v[2];

            if(digit >= 100 && digit % 2 == 0 && !mp[digit]) {
                count++;
                mp[digit] = true;
            }

            return;
        }

        for(int j = 0; j < d.size(); j++) {

            if(!vis[j]) {

                vis[j] = true;
                v.push_back(d[j]);

                check(d, v, mp, vis);

                v.pop_back();
                vis[j] = false;
            }
        }
    }

    int totalNumbers(vector<int>& d) {
         sort(d.begin(), d.end());

        vector<int> v;
        unordered_map<int,bool> mp;
        vector<bool> vis(d.size(), false);

        check(d, v, mp, vis);

        //sort(ans.begin(), ans.end());

        return count;
    }
};