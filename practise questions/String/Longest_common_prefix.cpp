class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        //storing first string in s
        string s=arr[0];
        int n=s.length();
        
        int k=INT_MAX;
        int j;
        for(int i=1;i<N;i++){
            string l=arr[i];
            for(j=0;j<n;j++){
                if(s[j]!=l[j])
                   break;
            }
            if(j==0)
              return "-1";
            k=min(k,j);
            
        }
        return arr[0].substr(0,k);
    }
};


#Expected Time Complexity: O(N*max(|arri|)).
#Expected Auxiliary Space: O(max(|arri|)) for result.

