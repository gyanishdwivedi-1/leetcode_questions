class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        int l = 0;
        int count = 0;

        string ans = "";

        for (int r = 0; r < n; r++) {

            if (s[r] == '1')
                count++;

            while (count == k) {

                
                string temp = s.substr(l, r - l + 1);

                if (ans == "" || temp.size() < ans.size() ||
                    (temp.size() == ans.size() && temp < ans)) {
                    ans = temp;
                }

               
                if (s[l] == '1')
                    count--;

                l++;
            }
        }

        return ans;
    }
};