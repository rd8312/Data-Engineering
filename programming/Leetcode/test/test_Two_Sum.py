from . import Two_Sum_1

def test_1():
    nums = [2,7,11,15]
    target = 9
    assert [0,1] == Solution.twoSum(nums, target)
