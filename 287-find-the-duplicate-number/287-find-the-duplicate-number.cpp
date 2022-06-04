class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> umap;
       for(int i=0; i<nums.size(); i++){
           umap[nums[i]]++;
       } 
        int ans;
        for(auto x:umap){
            if(x.second>1){
                ans= x.first;
            }
        }
        
        return ans;
    }
};