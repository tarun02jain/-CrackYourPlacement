class Solution {
public:
    bool check(int start , int end, string s){
        while(start <= end){
            if(s[start] != s[end]) return false;
            else{
                start++;
                end--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int len = s.length();
        int i = 0;
        int j = len-1;
        int target_i = -1;
        int target_j = -1;

        while(i<=j){
            if(s[i] == s[j]){
                i++;
                j--;
            }
            else{
                target_i = i;
                target_j = j;
                break;
            }
        }
        if(target_i == -1) return true;
        return check(target_i+1, target_j, s) || check(target_i, target_j-1, s);
    }
};