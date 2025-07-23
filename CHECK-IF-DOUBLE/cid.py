class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        s = set(arr)
        # for i in range(len(arr)):
        #     num = arr[i]/2
        #     for j in range (len(arr)):
        #         if arr[j] == num and j != i: 
        #             return True
        # for i in range(len(arr)):
        #     num = arr[i]/2
        #     if num in arr and i != arr.index(num):
        #         return True
            
        # return False
        s = set()
        for i in arr:
            if i/2 in s or i*2 in s:
                return True
            s.add(i)
            
        return False
        