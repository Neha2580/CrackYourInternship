class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
       sort(nums.begin(), nums.end());
       int count=1,m=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]!=nums[i]){
                if(nums[i]==nums[i-1]+1){
                count++;
                }
                else{
                    m = max(m,count);
                    count=1;
                }
            }
        }
        
        return max(m,count);
    }
};