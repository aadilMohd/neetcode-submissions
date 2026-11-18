class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        res = []
        subset = []
        nums.sort()

        def dfs(i):
            # Base case: stop when index reaches the length of nums
            if i >= len(nums):
                res.append(subset.copy())
                return

            # Decision 1: Include nums[i]
            subset.append(nums[i])
            dfs(i + 1)

            # Decision 2: Exclude nums[i] (backtrack)
            subset.pop()

            while i+1<len(nums) and nums[i]==nums[i+1]:
                i+=1
            dfs(i+1)

        dfs(0)
        return res