class Solution{
public:
    int equalPartition(int n, int arr[])
    {
        // code here
        int s=0;
        for(int i=0;i<n;i++)
        {
            s+=arr[i];
        }
        if(s%2==1)return 0;
        else
        {
            s/=2;
            bool dp[n+1][s+1];
            memset(dp,false,sizeof(dp));
            for(int i=0;i<=s;i++)dp[0][i]=false;
            for(int i=0;i<=n;i++)dp[i][0]=true;
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=s;j++)
                {
                    if(arr[i-1]<=j)
                    {
                        dp[i][j]=(dp[i-1][j]||dp[i-1][j-arr[i-1]]);
                    }
                    else dp[i][j]=dp[i-1][j];
                }
            }
            if(dp[n][s]==true) return 1;
            else return false;
        }
    }
};