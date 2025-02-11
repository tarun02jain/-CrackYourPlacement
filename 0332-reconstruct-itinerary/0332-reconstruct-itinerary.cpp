class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        unordered_map<string , vector<string>>mpp;
        for(auto &ticket: tickets){
            mpp[ticket[0]].push_back(ticket[1]);
        }
        for(auto &fro: mpp ){
            sort(fro.second.rbegin(), fro.second.rend());
        }
        vector<string>temp = {"JFK"};
        vector<string>ans;

        while(temp.size()){
            string curr = temp.back();
            if(mpp.find(curr) != mpp.end() && mpp[curr].size()){
                temp.push_back(mpp[curr].back());
                mpp[curr].pop_back();
            }
            else{
                ans.push_back(curr);
                temp.pop_back();
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};