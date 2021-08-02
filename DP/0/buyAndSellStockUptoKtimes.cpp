class Solution {
  public:
    int dp[2][202][502];
    int fun(int a[],int i,int k,int flag,int n)
    {
        if(i>=n || k==0)return 0;
        if(dp[flag][k][i]!=-1)return dp[flag][k][i];
        else
        {
            int ans=fun(a,i+1,k,flag,n);
        if(flag==1)
        {
            ans=max(ans,fun(a,i+1,k-1,0,n)+a[i]);
            
        }
        else ans=max(ans,fun(a,i+1,k,1,n)-a[i]);
        return dp[flag][k][i]=ans;
        }
    }
    int maxProfit(int k, int n, int a[]) {
        // code here
        memset(dp,-1,sizeof(dp));
        int ans=fun(a,0,k,0,n);
        return ans;
    }
};