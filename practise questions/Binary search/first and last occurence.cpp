//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//last occur
int sb(int arr[],int n,int s,int e,int x){
    if(s>e)
      return e;
    int mid=(s+e)/2;
    if(arr[mid]==x)
      return sb(arr,n,mid+1,e,x);
    else if(arr[mid]>x)
      return sb(arr,n,s,mid-1,x);
    else
      return sb(arr,n,mid+1,e,x);
}

//first occur
int bs(int arr[],int n,int s,int e,int x){
    if(s>e)
      return s;
    int mid=(s+e)/2;
    if(arr[mid]==x)
      return bs(arr,n,s,mid-1,x);
    else if(arr[mid]>x)
      return bs(arr,n,s,mid-1,x);
    else
      return bs(arr,n,mid+1,e,x);
}

vector<int> find(int arr[], int n , int x )
{
    // code here
    int a=bs(arr,n,0,n-1,x);
    int b=sb(arr,n,0,n-1,x);
    vector<int> s;
    if(arr[a]!=x and arr[b]!=x)
    {
        s.push_back(-1);
        s.push_back(-1);
    }  
    else{
        s.push_back(a);
        s.push_back(b);
    }
    
    return s;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
