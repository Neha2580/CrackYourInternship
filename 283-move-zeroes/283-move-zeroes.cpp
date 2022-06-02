class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         stack<int> stk;
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                count++;
            }
            else if(nums[i]!=0){
                stk.push(nums[i]);
            }
        }
        
        while(count>0){
            stk.push(0);
            count--;
        }
        int j=0;
        while(!stk.empty()){
            nums[j]=stk.top();
            stk.pop();
            j++;
        }
      reverse(nums.begin(), nums.end());
    }
};