//T.C. = O(2^n)
//S.C. = K*X(IF  x no. of combinations and k is avg length of combo)



public:
    void fun(int idx,int arr[],vector<int> ds,vector<vector<int>>& v,int N, int K){
        if(N==0 and ds.size()==K)
           {
               v.push_back(ds);
               return;
           }
           
        if(idx>=9 or N<0)
           return;
           
        ds.push_back(arr[idx]);
        fun(idx+1,arr,ds,v,N-arr[idx],K);
        ds.pop_back();
        fun(idx+1,arr,ds,v,N,K);
        
        
    }
    vector<vector<int>> combinationSum(int K, int N) {
        // code here
        int arr[]={1,2,3,4,5,6,7,8,9};
        vector<vector<int>> v;
        vector<int> ds;
        fun(0,arr,ds,v,N,K);
        return v;
    }
};
