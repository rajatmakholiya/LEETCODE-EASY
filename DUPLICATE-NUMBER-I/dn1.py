class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        hm = {}
        for indx, num in enumerate(nums):
            if num in hm:
                return True
            hm[num] = indx
        return False