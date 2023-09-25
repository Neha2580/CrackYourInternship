//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    
    int mini = INT_MAX;
    
    sort(a.begin(), a.end());
    
    if(n==0 || m==0){
        return 0;
    }
    
    for(int i=0; i+m-1 <n; i++){
     int  x = a[i+m-1] - a[i];
     mini = min(x,mini);
    }
    
    return mini;
    
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends