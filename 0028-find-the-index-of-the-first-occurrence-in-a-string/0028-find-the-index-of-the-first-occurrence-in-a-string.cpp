class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        for(int i = 0; i<n-(m-1); i++){
            if(needle == haystack.substr(i,m))return i;
        }
        return -1;
        
        
    }
};