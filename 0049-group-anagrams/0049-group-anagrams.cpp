class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>>mpp;
        for(auto s: strs){
            string t = s;
            sort(s.begin(),s.end());
            mpp[s].push_back(t);
        }
        vector<vector<string>>ans;
        for(auto p: mpp){
            ans.push_back(p.second);
        }
        return ans;
    }
};