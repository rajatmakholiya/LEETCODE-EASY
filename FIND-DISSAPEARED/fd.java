class Solution {
public List<Integer> findDisappearedNumbers(int[] nums) {
         Set<Integer> hs = new HashSet<>();
        for (int num : nums) {
            hs.add(num);
        }

        List<Integer> s = new ArrayList<>();
        for (int i = 1; i <= nums.length; i++) {
            if (!hs.contains(i)) {
                s.add(i);
            }
        }

        return s;
    }
};