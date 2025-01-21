class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        max_length = 0
        left = 0
        index_lookup = {}

        for right in range(len(s)):
            if s[right] in index_lookup:
                left = max(left, index_lookup[s[right]]+1)
            index_lookup[s[right]] = right
            max_length = max(max_length, right-left+1)
        
        return max_length
