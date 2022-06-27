// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> changeBits(int N) {
        // code here
        int x = N;
        int count=0;
        while(N){
            N = N>>1;
            count++;
        }
        
        int ans = pow(2,count)-1;
        int ans1 = ans - x;
        vector<int> v;
        v.push_back(ans1);
       v.push_back(ans);
      
       
       return v;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        Solution ob;
        auto ans = ob.changeBits(N);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends