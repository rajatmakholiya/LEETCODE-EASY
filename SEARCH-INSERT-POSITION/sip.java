class Solution {
    public int searchInsert(int[] nums, int target) {
        int end = nums.length - 1;
        int mid = nums.length / 2;
        int start = 0;
         while (start <= end){
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
            mid = start + (end - start) / 2;
         }
        return mid;
    }
}