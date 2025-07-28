class Solution {
public:
    int countHillValley(vector<int>& nums) {
        vector <int> arr;
        arr.push_back(nums[0]);
        for (int i : nums){
            if (arr[arr.size() - 1] != i){
                arr.push_back(i);
            }
        }
        int count = 0;
        for (int j = 1; j < arr.size() - 1; j++){
            if(arr[j] > arr[j + 1] && arr[j] > arr[j - 1]){
                count ++;
            }
            if(arr[j] < arr[j + 1] && arr[j] < arr[j - 1]){
                count ++;
            }
        }
        return count;
    }
};