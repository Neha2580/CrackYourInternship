class Solution {
public:
    int minPartitions(string s) {
        
        int mx=0;
        for(int i=0; i<s.size(); i++){
            
            int digit = s[i]-'0';
            mx = max(mx, digit);
        }
        
        return mx;
    }
};