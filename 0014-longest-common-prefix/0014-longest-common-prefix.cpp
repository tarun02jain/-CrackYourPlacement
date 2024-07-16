class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin() , strs.end());
        string first = strs[0];
        string last = strs.back();

        string ans = "";
        int i = 0;
        int j = 0;
        while(i<first.length() && j<last.length()){
            if(first[i] == last[j]){
                ans += first[i];
                i++;
                j++;
            }
            else break;
        }
        return ans;
    }
};