class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here  
        long long int l=0;
        long long int h=x;
        while(l<=h){
            long long int mid=l+(h-l)/2;
            if(pow(mid,2)>x)
               h=mid-1;
            else
               l=mid+1;
        }
        return h;
    }
};
