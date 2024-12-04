class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum_t = 0;
        int sum_s = 0;
        for(int i = 0; i < t.length(); i++){
            sum_t += t[i];
        }
        for(int i = 0; i < s.length(); i++){
            sum_s += s[i];
        }
        return sum_t - sum_s;
        
    }
};