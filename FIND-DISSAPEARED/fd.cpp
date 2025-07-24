class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> s;
        unordered_set <int> hs(nums.begin(), nums.end());
        for (int i = 1; i<= nums.size(); i++){
            if(hs.find(i) == hs.end()){
                s.push_back(i);
            }
        }
        return s;
    }
};