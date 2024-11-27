class Solution {
public:
    int strStr(string haystack, string needle) {
     int len_hay = haystack.size();
     int len_ned = needle.size();
     
     if(len_ned == 0){
        return 0;
     }

     for(int i=0; i <= len_hay - len_ned; i++){
        if(haystack.substr(i,len_ned) == needle){
            return i;
        }

     }
     return -1;
        
    }
};