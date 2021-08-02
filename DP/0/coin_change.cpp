class Solution

{
  public:
  long long int fun(int s[],int m,int n,vector<vector<long long int>> &dp)
  {
      if(n==0)return 1;
      if(n<0)return 0;
      if(m<=0 && n>0)return 0;
      if(dp[m][n]!=-1)return dp[m][n];
      else
      {
          if(s[m-1]<=n)
          {
              //return dp[m][n]=max(1+fun(s,m,n-s[m-1],dp),fun(s,m-1,n,dp));
              return dp[m][n]=fun(s,m,n-s[m-1],dp)+fun(s,m-1,n,dp);
          }
          else return dp[m][n]=fun(s,m-1,n,dp);
      }
  }
    long long int count( int s[], int m, int n )
    {
       
        //code here.
        vector<vector<long long int>> dp(m+1,vector<long long int>(n+1,-1));
        long long int ans=fun(s,m,n,dp);
        return ans;
    }
};