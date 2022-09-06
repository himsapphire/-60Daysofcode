//1.using binary search O(nlog(m))

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
      int n=mat.size();
      int m=mat[0].size();
      for(int i=0;i<n;i++){
          int l=0,h=m-1;
          while(l<=h){
              int mid=(l+h)/2;
              int left= mid-1>=0?mat[i][mid-1]:-1;
              int right= mid+1<m?mat[i][mid+1]:-1;
              int up=i-1>=0?mat[i-1][mid]:-1;
              int down=i+1<n?mat[i+1][mid]:-1;
              
              if(mat[i][mid]>=left and mat[i][mid]>=right and mat[i][mid]>=up and mat[i][mid]>=down)
                  return {i,mid};
              else if(left<right)
                  l=mid+1;
              else
                  h=mid-1;
          }
      }
        return {-1,-1};
    }
};


//2.lets move towards the greater element staring from corner element of first row  O(n+m)

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int i=0,j=m-1;
        while(i>=0 and i<n and j>=0 and j<m){
            
            int up=i-1>=0?mat[i-1][j]:-1;
            int down=i+1<n?mat[i+1][j]:-1;
            int left=j-1>=0?mat[i][j-1]:-1;
            int right=j+1<m?mat[i][j+1]:-1;
            
            if(mat[i][j]>=up and mat[i][j]>=down and mat[i][j]>= left and mat[i][j]>=right)
                return {i,j};
            
            int maxi=max({up,down,left,right});
            
            if(up==maxi)i--;
            else if(down==maxi)i++;
            else if(left==maxi)j--;
            else j++;
            
        }
        return {-1,-1};
    }
};
