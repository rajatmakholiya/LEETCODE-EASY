#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int tempIndex = 0;
        // for(int i = 0; i < nums.size(); i++){
        //     tempIndex = i;
        //     for (int j = i + 1; j< nums.size(); j++){
        //         if(nums[i] + nums[j] == target){
        //             return vector<int>{i,j};
        //         }
        //     }
        // }
        // return vector<int>{};
        unordered_map<int, int> hm;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (hm.find(diff) != hm.end()) {
                return vector<int>{i, hm[diff]};
            }
            hm[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = s.twoSum(nums, target);
    for(int i : result) {
        cout << i << " ";
    }
    cout << endl;  // Output: 0 1
    return 0;
}