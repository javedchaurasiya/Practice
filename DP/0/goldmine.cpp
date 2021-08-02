class Solution{
public:
// memoization working but some bug in iterative dp

    int fun(vector<vector<int>> v,int i,int j,vector<vector<int>> &dp,int n,int m)
    {
        if(i>=n || j>=m || i<0 || j<0)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        else
        {
            return dp[i][j]=v[i][j]+max(fun(v,i,j+1,dp,n,m),max(fun(v,i+1,j+1,dp,n,m),fun(v,i-1,j+1,dp,n,m)));
        }
    }
    int fun1(vector<vector<int>> v,int n,int m)
    {
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        // for(int i=0;i<=n;i++)
        // {
        //     for(int j=0;j<=m;j++)
        //     {
        //         if(i==n || j==m)dp[i][j]=0;
        //     }
        // }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                if(i!=0)dp[i][j]=v[i][j]+max(dp[i+1][j+1],max(dp[i][j+1],dp[i-1][j+1]));
                else dp[i][j]=v[i][j]+max(dp[i+1][j+1],dp[i][j+1]);
            }
        }
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        int ans=dp[0][0];
        for(int i=0;i<=n;i++)
        {
            ans=max(ans,dp[i][0]);
        }
        return ans;
        
    }
    int maxGold(int n, int m, vector<vector<int>> v)
    {
        // code here
        //vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        int ans=fun1(v,n,m);
        return ans;
    }
};