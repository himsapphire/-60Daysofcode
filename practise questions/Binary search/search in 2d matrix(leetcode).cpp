class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int M=matrix[0].size(),N=matrix.size(),X=target;
        int l=0,h=M-1;
	    int row=N;
	    for(int i=0;i<N;i++){
	        if(X>=matrix[i][l] and X<=matrix[i][h])
	           {row=i;
	            break;}
	    }
        //we didnt get any specific row , dont go forward as it will show error
        if(row==N)
            return 0;
	   while(l<=h){
	       int mid=(l+h)/2;
	       if(matrix[row][mid]==X)
	          return 1;
	       else if(matrix[row][mid]>X)
	          h=mid-1;
	       else
	          l=mid+1;
	   }
	   return 0;
    }
};
