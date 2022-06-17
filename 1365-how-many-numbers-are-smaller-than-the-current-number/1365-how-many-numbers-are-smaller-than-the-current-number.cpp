class Solution
{
    public:
        vector<int> smallerNumbersThanCurrent(vector<int> &nums) {
            int n = nums.size();
            map<int,int> s;
            
           for(int i=0; i<n; i++){
               s[nums[i]]++;
           }
            
            vector<int> v(101);
            int a = 0;
            for(auto it: s){
                v[it.first] = a;
                a = a + it.second;
            }
            
            vector<int> ans;
            for(int i=0; i<n; i++){
                ans.push_back(v[nums[i]]);
            }
            return ans;
            
        }
};