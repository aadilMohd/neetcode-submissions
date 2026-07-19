class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {


        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])!=m.end()){
                m[nums[i]]++;
            }
            else{
                m[nums[i]]=0;
            }
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;
        for(auto& entry:m){
            heap.push({entry.second,entry.first});
            if(heap.size()>k){
                heap.pop();
            }
        }

        vector<int> res;

        while(heap.size()>0){
            res.push_back(heap.top().second);
            heap.pop();
        }


        return res;
    }
};
