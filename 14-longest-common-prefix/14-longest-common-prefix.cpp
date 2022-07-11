class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        
        if(strs.size()==1){
            return strs[0];
        }
        
        int prefixLen = strs[0].size();
        if(prefixLen==0){
            return "";
        }
        
        for(int i=1; i<strs.size(); i++){
            int a = 0;
            while(a<strs[i].size() && strs[0][a]==strs[i][a]){
                a++;
            }
            
            prefixLen = min(prefixLen, a);
        }
        
        return strs[0].substr(0,prefixLen);
    }
};