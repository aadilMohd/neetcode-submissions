class Solution:
     def subsets(self, nums: List[int]) -> List[List[int]]:
        res = []
        subset = []

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
            dfs(i + 1)

        dfs(0)
        return res