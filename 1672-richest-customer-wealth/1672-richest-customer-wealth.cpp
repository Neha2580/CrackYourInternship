class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> sum;
        
       int m = accounts.size();
      
        int sum1=0;
        for(int i=0; i<m; i++){
             int n = accounts[i].size();
            sum1=0;
            for(int j=0; j<n; j++){
                sum1+=accounts[i][j];
            } 
             sum.push_back(sum1);
        }
       
        
        int mx=INT_MIN;
         for(int i=0; i<m; i++){
             mx = max(mx, sum[i]);
         }
        
        return mx;
    }
};