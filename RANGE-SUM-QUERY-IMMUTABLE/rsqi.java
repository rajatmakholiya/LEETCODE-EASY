import java.util.*;

class NumArray {
    private int[] prefix;

    public NumArray(int[] nums) {
        int l = nums.length;
        prefix = new int[l];
        int prev = 0;
        for (int i = 0; i < l; i++) {
            prev += nums[i];
            prefix[i] = prev;
        }
    }

    public int sumRange(int left, int right) {
        if (left == 0) return prefix[right];
        return prefix[right] - prefix[left - 1];
    }

    public static void main(String[] args) {
        String[] commands = {"NumArray", "sumRange", "sumRange", "sumRange"};
        int[][] inputs = {{-2, 0, 3, -5, 2, -1}, {0, 2}, {2, 5}, {0, 5}};

        NumArray obj = new NumArray(inputs[0]);
        List<Object> results = new ArrayList<>();
        results.add(null); // constructor
        results.add(obj.sumRange(inputs[1][0], inputs[1][1]));
        results.add(obj.sumRange(inputs[2][0], inputs[2][1]));
        results.add(obj.sumRange(inputs[3][0], inputs[3][1]));
        System.out.println(results);
    }
}
