class Solution:
    def trap(self, height: List[int]) -> int:

        i = 0
        j = len(height)-1
        leftm = height[i]
        rightm = height[j]

        res = 0

        while(i<j):

            if(leftm<rightm):
                i+=1
                leftm= max(leftm,height[i])
                res += (leftm - height[i])

            
            else:

                j-=1
                rightm = max(rightm,height[j])
                res += (rightm - height[j])

        return res



        