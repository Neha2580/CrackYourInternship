class Solution {
public:
    vector<int> getRow(int n) {
        vector<int> ans(n+1, 1);
        
        for(long long int i=1; i<n+1; i++){
            ans[i] = (int )(ans[i-1] *(n-i+1)/i);
        }
        
        return ans;
    }
};