class Solution {
    public int search(int[] nums, int target) {
        int end = nums.length - 1;
        int mid = end / 2;
        int start = 0;
         while (start <= end){
            if(mid < target){
                start = mid + 1;
                
            }
            else if(mid > target){
                end = mid - 1;
            }
            else{
                return mid;
            }
         }
        return -1;
    }
}