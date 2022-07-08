class Solution {
    public:
 int target;
    vector<vector<int>> cost;
    vector<int> houses;
    int n, m;
    
    long long dp[109][109][39]; // create dp table.
    
    long long solve(int idx, int nums, int prev) {
        
        if(nums > target) // if minimum group exceed the target value then retutn largest possible value.
            return INT_MAX;
        
        if(idx == m){ 
            return nums == target ? 0 : INT_MAX; // if all the house is painted in this case simple retutn 0 else retutn INT_MAX.
        }
        
        if(dp[idx][nums][prev] != -1) // check if already present in the dp table if present then simply return them.
            return dp[idx][nums][prev];
        
        long long  ans = INT_MAX; // if not present in the dp table then intialize the ans with INT_MAX.
        int new_num = nums;
        
        if(houses[idx] != 0) { // if house is painted.
            new_num = nums;
            if(prev != houses[idx]) new_num = nums + 1; // check current house color equal to previous house color.if it is not then group incremented by 1.
            ans = min(ans, solve(idx + 1, new_num, houses[idx]));    
        } else { // if house is not painted.
            for(int i = 1; i <= n; i++) { // choose color form 1 to n.and check color which we choose is equal to the previous color or not 
                new_num = nums;
                if(prev != i) new_num = nums + 1;
                ans = min(ans, solve(idx + 1, new_num, i) + cost[idx][i-1]);
            }
        }
        
        return dp[idx][nums][prev] = ans; // store in dp table.
        
    }
    
    
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        this->houses = houses;
        this->cost = cost;
        this->target = target;
        this->n = n; this->m = m;
        memset(dp, -1, sizeof(dp));
        long long ans = solve(0, 0, 29);
        return ans == INT_MAX ? -1 : ans;
    }
};