int LCSof3 (string a, string b, string c, int n1, int n2, int n3)
{
    // your code here
    int dp[n1+1][n2+1][n3+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n1;i++)
    {
        for(int j=1;j<=n2;j++)
        {
            for(int k=1;k<=n3;k++)
            {
                if(a[i-1]==b[j-1] && b[j-1]==c[k-1])
                {
                    dp[i][j][k]=1+dp[i-1][j-1][k-1];
                }
                else
                {
                    int p=dp[i][j-1][k-1];
                    int q=dp[i-1][j][k-1];
                    int r=dp[i-1][j-1][k];
                    int s=dp[i][j][k-1];
                    int t=dp[i][j-1][k];
                    int u=dp[i-1][j][k];
                     dp[i][j][k]=max(p,max(q,max(r,max(s,max(t,u)))));
                }
            }
        }
    }
    return dp[n1][n2][n3];
}