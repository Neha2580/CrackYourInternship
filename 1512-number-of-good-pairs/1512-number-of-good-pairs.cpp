class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
       
        unordered_map<int,vector<int>> map;
        for(auto i:nums){
            map[i].push_back(i);
        }
        
        int cnt=0;
        for(auto x:map){
            if(x.second.size()>1){
                int n = x.second.size();
                cnt+=(n*(n-1))/2;
            }
        }
 
        return cnt;
    }
};