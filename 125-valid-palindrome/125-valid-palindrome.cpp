class Solution {
public:
    bool isValid(char &c, string &s) {
        if((c >= 'A' && c <= 'Z')) {
            c = c - 'A' + 'a';
            return 1;
        }
        if((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
            return 1;
        return 0;
    }
    bool isPalindrome(string s) {
        
        int st =0;
        int e  =s.size()-1;
        
        while(st<e){
            while(st<e && !isValid(s[st],s)){
                st++;
            }
            while(st<e && !isValid(s[e], s)){
                e--;
            }
           if(tolower(s[st])!=tolower(s[e])){
                return 0;
            }
          
                st++;
                e--;
        }
        
        return 1;
    }
};