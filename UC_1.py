class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        res = {}
        for i, j in enumerate(nums):
            difference = target - j
            if difference in res :
                return[res[difference], i]
            res[j] = i
   
             
