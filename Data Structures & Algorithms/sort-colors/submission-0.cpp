class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int count1=0;
        int count2=0;
        int count3=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count1++;
            }
            else if(nums[i]==1){
                count2++;}
                else{
                    count3++;
                }
            }

            int k=0;

            while(k<nums.size()){
                while(count1--){
                    nums[k++]=0;
                }
                while(count2--){
                    nums[k++]=1;
                }
                while(count3--){
                    nums[k++]=2;
                }

            }

            // return nums;
        }


    
};