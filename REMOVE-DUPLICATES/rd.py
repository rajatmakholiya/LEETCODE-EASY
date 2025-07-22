class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        hs = set()
        temp = []
        for i in nums:
            if i not in hs:
                hs.add(i)
                temp.append(i)
        nums[:] = temp
        return len(nums)
