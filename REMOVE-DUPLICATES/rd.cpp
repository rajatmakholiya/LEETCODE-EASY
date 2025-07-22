#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    // unordered_set <int> hm;
    // vector<int> temparr;
    // for(int i = 0; i < nums.size(); i++){
    //     if(hm.find(nums[i]) == hm.end()){
    //         hm.insert(nums[i]);
    //         temparr.push_back(nums[i]);
    //     }
    // }
    // nums = temparr;

    int i = 1;
    for (int j =0 ; j < nums.size(); j++){
        if(nums[j] != nums[i-1]){
            nums[i] = nums[j];
            i++;
        }
    }
    return nums.size();
}
};
int main(){
    vector<int> nums = {1,1,2};
    Solution sol;
    sol.removeDuplicates(nums);
    cout<< nums.size()<<nums[0]<<nums[1] <<endl;
    return 0;
}