class Solution {
    public:
    int linearSearch(vector <int> nums, int target){
        for (int i =0; i< nums.size(); i++){
            nums[i] == target ? return 1; : continue;
        }
        return -1;
    }
}