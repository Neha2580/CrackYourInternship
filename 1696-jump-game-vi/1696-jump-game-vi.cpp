class Solution {
public:
     int maxResult(vector<int>& nums, int k)
    {
       int n = nums.size();
        vector<int> dp(nums.size(),0);
        dp[n-1]=nums[n-1];
        
        deque<int> dq;
        dq.push_back(n-1);
      
        for(int i=n-2;i>=0;i--){
          
            int a = nums[i];
            
            while(dq.size() && dq.front()>i+k){    //  take out indices until we find front less than i+k
              dq.pop_front();
            }
            
            int next  = dp[dq.front()];
            dp[i] = a+next;
           
            while(dq.size() && dp[dq.back()]< dp[i]){       // if dp[i] is greater than back then pop back because we want to keep max element at front
              dq.pop_back();
            } 
            
            dq.push_back(i); 
            
        }
        
        return dp[0];
    }
};