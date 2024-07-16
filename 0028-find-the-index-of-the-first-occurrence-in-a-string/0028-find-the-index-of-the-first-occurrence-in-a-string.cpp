class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length() < needle.length()) return -1;
        int len2 = needle.length();
        int len1 = haystack.length();

        for(int i = 0; i<len1-(len2-1); i++){
            if (needle == haystack.substr(i , len2)) return i;;
            
        }
        return -1;
    }
};