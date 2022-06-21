class Solution {
public:
    bool isIsomorphic(string s, string t) {
     
        int n=s.size();
        map<char,char> map;
        set<char> x;
        for(int i=0; i<n; i++){
            if(map.count(s[i])==0 && x.count(t[i])==0){
                map[s[i]]=t[i];
                x.insert(t[i]);
            }
            else if(map.count(s[i])==0  && x.count(t[i])){
                return false;
            }
            else if(map[s[i]]!=t[i]){
                return false;
            }        
            
        }
        
        return true;
    }
};