class Solution
{
    public:
    
    int dp[202][202];
    int fun(int n,int f)
    {
        if(n==1)return f;
        if(f==1 || f==0)return f;
        int ans=INT_MAX;
        if(dp[n][f]!=-1)return dp[n][f];
        else
        {
            for(int i=1;i<=f;i++)
        {
            int temp=1+max(fun(n-1,i-1),fun(n,f-i));
            ans=min(ans,temp);
        }
        return dp[n][f]=ans;
        }
    }
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int eggDrop(int n, int k) 
    {
        // your code here
        memset(dp,-1,sizeof(dp));
        return fun(n,k);
    }
};