// T.C - O(nlog(n))

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isvalid(int A[],int N , int M, int mid){
        int sum=0,student=1;
        for(int i=0;i<N;i++){
            sum=sum+A[i];
            if(sum>mid){
                student++;
                sum=A[i];
            }
            if(student>M)
               return false;
        }
        return true;
    }
    
    
    int findPages(int A[], int N, int M) 
    {
        //code here
        //if no. of books is greater than no. of students , no allotment
        if(N<M)
          return -1;
          
        //l and h will define the search space range for our binary search  
        int l=0,h=0;  
        for(int i=0;i<N;i++){
           l=max(l,A[i]);
           h=h+A[i];
        }
        
        int ans=-1;
        
        while(l<=h){
            int mid=(l+h)/2;
            if(isvalid(A,N,M,mid)){
                ans=mid;
                //we have to minimise the maximum
                h=mid-1;
                
            }
            else
               l=mid+1;
        }
        
        return ans;
    }
};
