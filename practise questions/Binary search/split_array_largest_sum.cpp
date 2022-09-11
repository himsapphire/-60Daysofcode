class Solution {
public:
    bool isvalid(vector<int>& nums,int m,int mid){
        int s=1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            if(sum>mid)
            {
                s++;
                sum=nums[i];
                
            }
            if(s>m)
                return false;
        }
        return true;
    }
    int splitArray(vector<int>& nums, int m) {
        int l=0,h=0;int ans;
        for(int i=0;i<nums.size();i++)
        { 
            l=max(l,nums[i]);
            h+=nums[i];}
        
        if(m==1)
            return h;
            
         while(l<=h){
             int mid=l+(h-l)/2;
             if(isvalid(nums,m,mid))
             {
                 ans=mid;
                 h=mid-1;
             }
             else
                 l=mid+1;
         }
        return ans;
    }
};
