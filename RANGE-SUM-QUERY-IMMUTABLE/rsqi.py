from typing import List

class NumArray:

    def __init__(self, nums: List[int]):
        l = len(nums)
        self.prefix = [0] * l
        prev = 0
        for i in range(l):
            prev = prev + nums[i]
            self.prefix[i] = prev

    def sumRange(self, left: int, right: int) -> int:
        if left == 0:
            return self.prefix[right]
        return self.prefix[right] - self.prefix[left-1]
        
if __name__ == "__main__":
    commands = ["NumArray", "sumRange", "sumRange", "sumRange"]
    inputs = [[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]
    obj = NumArray(inputs[0][0])
    results = []
    results.append(None)
    results.append(obj.sumRange(inputs[1][0], inputs[1][1]))
    results.append(obj.sumRange(inputs[2][0], inputs[2][1]))
    results.append(obj.sumRange(inputs[3][0], inputs[3][1]))
    print(results)
