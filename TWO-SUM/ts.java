class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> hm = new HashMap<Integer, Integer>();
        for (int i = 0; i < nums.length; i++) {
            int diff = target - nums[i];
            if (hm.containsKey(diff)) {
                return new int[]{hm.get(diff), i};
            }
            hm.put(nums[i], i);
        }
        return null;
        }

    public static void main(String[] args) {
        Solution s1 = new Solution();
        int[] nums = {2, 7, 11, 15};
        int target = 9;
        int[] res = s1.twoSum(nums, target);
}
