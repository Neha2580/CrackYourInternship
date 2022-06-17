class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       
        int n = candies.size();
        int mx = INT_MIN;
        
        for(int i=0; i<n; i++){
            mx = max(mx, candies[i]);
        }
        
        vector<bool> ans;
        
        for(int i=0; i<n; i++){
            if(candies[i]+extraCandies>=mx){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        
        return ans;
    }
};