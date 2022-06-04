class Solution {
public:
   
    
    void moveZeroes(vector<int>& nums) {
        int i=0, j=0; 
        while(j<nums.size()){
            if(nums[j]==0){
                j++;
            }
            else{
                swap(nums[i++], nums[j++]);
            }
        }
    }
};