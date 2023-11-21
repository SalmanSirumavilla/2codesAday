class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        dct = {}
        for i, each in enumerate(nums):
            complement = target - each
            if complement in dct:
                return [dct[complement], i]
            dct[each] = i
        return []