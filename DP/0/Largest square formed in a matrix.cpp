class Solution{
public:
    int maxSquare(int n, int m, vector<vector<int>> mat){
        // code here
        int dp[n][m];
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || j==0 )dp[i][j]=mat[i][j];
                else
                {
                    if(mat[i][j]==1)dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                    else dp[i][j]=mat[i][j];
                }
                ans=max(ans,dp[i][j]);
            }
        }
        return ans;
    }
};