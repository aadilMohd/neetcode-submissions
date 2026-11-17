class Solution:
    def combinationSum(self, nums: List[int], target: int) -> List[List[int]]:


        res, cur = [] , []
        def df(i,s):
            if s==target:
                res.append(cur.copy())
                return 
            if i >= len(nums) or s>target:
                return

            cur.append(nums[i])
            df(i,s+nums[i])

            cur.pop()
            df(i+1,s)


        df(0,0)
        return res

            
        