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
