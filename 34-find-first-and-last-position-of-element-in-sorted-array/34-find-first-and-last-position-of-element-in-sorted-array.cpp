class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        int mid=s+(e-s)/2;
        int res1=-1,res2=-1;
        vector <int> v;
        while(s<=e){
         mid=s+(e-s)/2;
            if(target==nums[mid]){
                res1=mid;
                e=mid-1;
            }
           else if(target<nums[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            } 
          
        }
       
          s=0,e=nums.size()-1;
         while(s<=e){
            mid=s+(e-s)/2;
            if(target==nums[mid]){
                res2=mid;
                s=mid+1;
            }
            
            if(target<nums[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }

        }
       
        
        v.push_back(res1);
        v.push_back(res2);
        return v;
        
//          vector<int>v;
//         int first=-1,last=-1;
//         int start=0;int end=nums.size()-1;
//         int mid;
//         while(start<=end)
//         {
//             mid=start+(end-start)/2;
//             if(target==nums[mid])
//             {
//                 first=mid;
//                 end=mid-1;
//             }
//             else if (target<nums[mid])
//             {
//                 end=mid-1;
//             }
//             else
//             {
//                 start=mid+1;
//             }
//         }
//        start=0; end=nums.size()-1;
        
//         while(start<=end)
//         {
//             mid=start+(end-start)/2;
//             if(target==nums[mid])
//             {
//                 last=mid;
//                 start=mid+1;
//             }
//             else if (target<nums[mid])
//             {
//                 end=mid-1;
//             }
//             else
//             {
//                 start=mid+1;
//             }
//         }   
//         v.push_back(first);
//         v.push_back(last); 
//         return v;
    }
};