class RandomizedCollection {
public:
    vector<int>nums;
    unordered_map<int,unordered_set<int>>mpp;
    RandomizedCollection() {
        
    }
    
    bool insert(int val) {
        int nums_ind = nums.size();
        nums.push_back(val);
        mpp[val].insert(nums_ind);
        return mpp[val].size() == 1;

    }
    
    bool remove(int val) {
        if(mpp[val].size() == 0) return false;
        int ind = *mpp[val].begin();
        mpp[val].erase(ind);
        int val_back = nums[nums.size()-1];
        swap(nums[ind] , nums[nums.size()-1]);
        mpp[val_back].insert(ind);
        mpp[val_back].erase(nums.size()-1);
        nums.pop_back();
        return true;
    }
    
    int getRandom() {
        return nums[rand()%nums.size()];
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */