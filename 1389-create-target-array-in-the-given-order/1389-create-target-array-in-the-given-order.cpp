class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        
        
        vector<int> target;
        
        int n=nums.size(); 
        for(int i=0; i<n; i++){
            auto it = target.begin()+index[i];
            target.insert(it, nums[i]);
        }
        
        return target;
    }
};