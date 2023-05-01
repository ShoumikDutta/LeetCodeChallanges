class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums=sorted(nums)
        for i in range(0,len(nums),2):
            if nums[i] in nums[i+1:]:
                continue
            else:
                return nums[i]
