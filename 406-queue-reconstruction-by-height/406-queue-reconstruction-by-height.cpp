class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> result;  //return value
  
        auto compare = [](vector<int>& a, vector<int>& b){ 
            return  ((a[0] == b[0] && a[1] < b[1]) || a[0] > b[0]); 
        };
		sort(people.begin(), people.end(), compare);

        for(vector<int> p : people)
			result.insert(result.begin()+p[1], p);
    
        return result;  
    }
};