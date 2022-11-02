class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num_dic = {}
        
        # for idx in range(len(nums)):
        for idx, number in enumerate(nums):
            rest = target - number
            if rest in num_dic:
                return [idx, num_dic[rest]]
            else:
                num_dic[number] = idx

    def twoSumSorted(self, nums: List[int], target: int) -> List[int]:
        # if nums is sorted
        # [2, 7, 11, 15]
        # [(2, 0), (7, 1), (11, 2), (15, 3)]
        sorted_num = sorted(zip(nums, range(len(nums))))

        # two pointers
        left = 0
        right = len(nums) - 1

        while left < right:
            value = sorted_num[left][0] + sorted_num[right][0]

            if value == target:
                return [sorted_num[left][1] , sorted_num[right][1]]
            elif value < target:
                left += 1
            else:
                right -= 1
