class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // unordered_map <int, int> hm;
        
        // for (int i = 0; i < nums.size(); i++){
        //     if(hm.find(nums[i]) != hm.end()){
        //         return true;
        //     }
        //     hm[nums[i]] = i;
        // }
        // return false;

        set <int> hs;

        for (int i=0; i < nums.size(); i++){
            hs.insert(nums[i]);
        }
        return hs.size() != nums.size();
    }
};