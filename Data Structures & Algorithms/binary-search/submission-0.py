class Solution:
    def search(self, nums: List[int], target: int) -> int:

        i=0;
        j=len(nums)-1

        while(i<=j):
            m = (i+j)//2

            if (nums[m]>target):
                j-=1
            elif(nums[m]<target):
                i+=1
            else:
                return m

        return -1     