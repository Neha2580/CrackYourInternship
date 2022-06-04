class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int minSoFar = INT_MAX;
      int mx=0;
        
        for(int i=0; i<prices.size(); i++){
            minSoFar = min(prices[i], minSoFar);
             int profit = prices[i]-minSoFar;
            
            mx=max(mx,profit);
        }
        
        return mx;
    }
};