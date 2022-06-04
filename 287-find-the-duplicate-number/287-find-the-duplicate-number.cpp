class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // vector<int> res;
        int res;
        for(int i=0; i<nums.size(); i++){
            int index = abs(nums[i]) - 1;
            if(nums[index]<0){
                res=abs(nums[i]);
            }
            
            nums[index] = -nums[index];
        }
        
        return res;
    }
};