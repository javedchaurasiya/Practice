class Solution{
public:
    int fun(int a[],int i,int j,vector<vector<int>> &dp)
    {
        if(i>=j)return 0;
        int ans=INT_MAX;
        if(dp[i][j]!=-1)return dp[i][j];
        else
        {
            for(int k=i;k<j;k++)
        {
            int temp=fun(a,i,k,dp)+fun(a,k+1,j,dp)+a[i-1]*a[k]*a[j];
            ans=min(ans,temp);
        }
        return dp[i][j]=ans;
        }
    }
    int matrixMultiplication(int n, int arr[])
    {
        // code here
        vector<vector<int>> dp(102,vector<int>(102,-1));
        int ans=fun(arr,1,n-1,dp);
        return ans;
    }
};