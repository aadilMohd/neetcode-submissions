class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n= nums.size();

        unordered_map<int,int> pmap;

        for(int i=0;i<n;i++){
            int diff = target - nums[i];

            if(pmap.find(diff) != pmap.end()){
                return {pmap[diff],i};
            }

            pmap.insert({nums[i],i});
        } 

        return {};
        
    }
};
