class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int n=nums.size();
        int j=1;
        int cnt=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
            if(nums[i]==nums[j] && i<j){
                cnt++;
            }
            }
        }
        
        return cnt;
    }
};