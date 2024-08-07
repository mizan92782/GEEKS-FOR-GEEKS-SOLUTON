//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        
       map<int,int>mp;
       for(int i=0;i<n;i++)
       {
            mp[arr[i]]++;
       }
       
       int a[10000];
       memset(a,-1,sizeof(a));
       
       
       for(auto it:mp)
       {
            if(a[it.second]==0)
            {
                return false;
            }else
            {
                 a[it.second]=0;
            }
       }
       
       
    
    
    return true;
    
    
    }
    
   
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        bool ans=ob.isFrequencyUnique(n,arr);
        if(ans)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends