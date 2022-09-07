//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends

pair<int,int> bs(int arr[],int s,int e,int x,int n){
    
    if(s>e){
        if(e==-1)
          return make_pair(-1,arr[s]);
        else if(s==n)
          return make_pair(arr[e],-1);
        else
          return make_pair(arr[e],arr[s]);
    }
    
    int mid=(s+e)/2;
    if(arr[mid]==x)
       return make_pair(x,x);
    else if(arr[mid]>x)
       return bs(arr,0,mid-1,x,n);
    else
       return bs(arr,mid+1,e,x,n);
    
}
pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    sort(arr,arr+n);
    if(n==1){
        if(arr[0]<x)
           return make_pair(arr[0],-1);
        else
           return make_pair(-1,arr[0]);
    }
    if(n==2 and x>arr[0] and x<arr[1]){
        return make_pair(arr[0],arr[1]);
        
    }
    pair<int,int> p=bs(arr,0,n-1,x,n);
    return p;
}
