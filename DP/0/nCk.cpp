class Solution{
public:
    int nCr(int n, int k){
        // code here
        if(k>n)return 0;
        else
        {
            int dp[n+1][k+1];
        int m=1000000000+7;
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=min(i,k);j++)
            {
                if(j==0 || i==j)dp[i][j]=1;
                else
                {
                    dp[i][j]=((dp[i-1][j-1]%m) +(dp[i-1][j]%m))%m;
                }
            }
        }
        return dp[n][k];
    }
        }
};