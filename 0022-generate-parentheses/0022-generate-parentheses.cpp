class Solution {
public:
    void generate(int open, int close, int n, string s, vector<string>&ans){
        if(open == close && open == n){
            ans.push_back(s);
            return;
        }
        if(open<n){
            generate(open+1, close , n, s + '(', ans);
        }
        if(close < open){
            generate(open, close+1, n, s+')', ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp = "";
        generate(0,0,n,temp,ans);
        return ans;
    }
};