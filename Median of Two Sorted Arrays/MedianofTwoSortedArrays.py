class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        nums=sorted(nums1+nums2)
        
        if len(nums)%2==0:
            #list got even number of items
            n=int(len(nums)/2)-1
            return (nums[n]+nums[n+1])/2.0
            

            
        else:
            #list got odd number of items
            n=int(len(nums)/2)
            return float(nums[n])
