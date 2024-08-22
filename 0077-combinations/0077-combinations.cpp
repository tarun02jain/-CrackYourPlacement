class Solution {
public:
    void helper(int n, int k, vector<int>&curr, vector<vector<int>>&res){
        if(k == 0){
            res.push_back(curr);
            return;
        }
        if(n<1)return;

        curr.push_back(n);
        helper(n-1 , k-1 , curr , res);
        curr.pop_back();
        helper(n-1 , k, curr , res);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>curr;
        vector<vector<int>>res;

        helper(n,k,curr,res);
        return res;
    }
};