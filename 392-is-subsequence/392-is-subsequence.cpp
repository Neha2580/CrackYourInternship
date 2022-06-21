class Solution {
public:
    bool isSubsequence(string s, string t) {
        int k=0,count=0;
        for(int i=0; i<t.size(); i++){
            if(t[i]==s[k]){
                count++;
                k++;
            }
        }
        
        if(count==s.size()){
            return true;
        }
        else{
            return false;
        }
    }
};