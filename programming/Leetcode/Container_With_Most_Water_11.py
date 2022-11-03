# time complexity : O(n)
# space complexity : O(1)

class Solution:
    def maxArea(self, height: List[int]) -> int:
        left = 0
        right = len(height) - 1
        water = 0
        
        while right != left:
            
            water = max(min(height[left], height[right])*(right-left), water)
            
            if height[left] > height[right]:
                right = right - 1
            else:
                left = left + 1
                
        return water
