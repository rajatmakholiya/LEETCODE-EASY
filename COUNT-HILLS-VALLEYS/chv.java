class Solution {
    public int countHillValley(int[] nums) {
        List<Integer> arr = new ArrayList<>();
        arr.add(nums[0]);

        for (int i : nums) {
            if (arr.get(arr.size() - 1) != i) {
                arr.add(i);
            }
        }

        int count = 0;
        for (int j = 1; j < arr.size() - 1; j++) {
            if (arr.get(j) > arr.get(j - 1) && arr.get(j) > arr.get(j + 1)) {
                count++;
            }
            if (arr.get(j) < arr.get(j - 1) && arr.get(j) < arr.get(j + 1)) {
                count++;
            }
        }

        return count;
    }
}
