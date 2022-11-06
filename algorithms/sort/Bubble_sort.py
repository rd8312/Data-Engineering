def BubbleSort(nums):
    length = len(nums)
    for i in range(length):
        for j in range(length-i-1):
            if nums[j]>nums[j+1]:
                nums[j], nums[j+1] = nums[j+1], nums[j]

if __name__ == '__main__':
    nums_list = [10, 5, 21, 9 ,11]
    print(nums_list)

    BubbleSort(nums_list)
    print(nums_list)
