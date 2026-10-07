class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        
        l , r = 1, max(piles)
        res = r

        while l <= r:
            k =(l+r)//2

            tt = 0

            for i in piles:
                tt += math.ceil(float(i)/k)

            if tt <= h :
                res = k
                r = k-1
            else:
                l = k+1
        return res 