class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    // int dp[1003][1003];
    // int fun(string a,string b,int x,int y)
    // {
    //   if(x==0 || y==0)return 0;
    //   if(dp[x][y]!=-1)return dp[x][y];
    //   else
    //   {
    //       if(a[x-1]==b[y-1])return dp[x][y]=1+fun(a,b,x-1,y-1);
    //       else return dp[x][y]=max(fun(a,b,x-1,y),fun(a,b,x,y-1));
    //   }
    // }
    int fun(string a,string b,int x,int y)
    {
        int dp[x+1][y+1];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<=x;i++)
        {
            for(int j=0;j<=y;j++)
            {
                if(i==0 || j==0)dp[i][j]=0;
                else
                {
                    if(a[i-1]==b[j-1])dp[i][j]=1+dp[i-1][j-1];
                    else
                    {
                        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                    }
                }
            }
        }
        return dp[x][y];
    }
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        //memset(dp,-1,sizeof(dp));
        int ans=fun(s1,s2,x,y);
        return ans;
    }
};