class Solution {
public:
    bool isValid(string s) {
        
        int n = s.size(); 
        stack<char> stk;
        char x;
        
        for(int i=0; i<n; i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                stk.push(s[i]);
                continue;
            }
        
            if(stk.empty()){
                return false;
            }
        
        x= stk.top();
        stk.pop();
        
            switch(s[i]){
                    
                case ')':
                    if(x == '{' || x == '['){
                        return false;
                    }
                    break;
              
                case '}':
                    if(x == '(' || x == '['){
                        return false;
                    }
                    break;  
                    
               case ']':
                    if(x == '{' || x == '('){
                        return false;
                    }
                    break;  
            }
        
        }  
        
        return stk.empty();
    }
};