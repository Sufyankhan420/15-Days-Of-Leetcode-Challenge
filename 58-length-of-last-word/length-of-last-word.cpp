class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i;
        for (i = s.length() - 1; i >= 0 && s[i] == ' '; i--) {
        }
        
        for (; i >= 0 && s[i] != ' '; i--) {
            length++;  
        }
        
        return length; 
    }
};
