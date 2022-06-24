class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> map;
        
        for(int i=0; i<s.size(); i++){
            map[s[i]]++;
        }
        
        int sum=0,temp=0;
        for(auto it: map){
           if(it.second%2==0){
               sum+=it.second;
           }
            else{
                temp++;
                sum+=it.second - 1;
            }
        }
        
        if(temp){
            sum++;
        }
        
        return sum;
    }
};