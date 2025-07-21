class Solution:
    def twoSum(self, nums, target):
        hm = {}
        for i, num in enumerate(nums):
            dif = target - num
            if dif in hm:
                return [hm[dif], i]
            hm[num] = i
        return {}

class main:
    obj = Solution()
    print(obj.twoSum([2,7,11,15],9))

if __name__ == "__main__":
    main()