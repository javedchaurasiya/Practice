class Solution {
  public:
  
  int fun(string s,string t,int m,int n,vector<vector<int>>& dp)
  {
      if(m==0)return n;
      if(n==0)return m;
      
      if(dp[m][n]!=-1)return dp[m][n];
      else
      {
          if(s[m-1]==t[n-1])
      {
          return dp[m][n]= (fun(s,t,m-1,n-1,dp));
          
      }
      else
      {
          return dp[m][n]= 1 + min(fun(s,t,m,n-1,dp),min(fun(s,t,m-1,n,dp),fun(s,t,m-1,n-1,dp)));
      }
      }
      
  }
    int editDistance(string s, string t) {
        // Code here
        int m=s.length();
        int n=t.length();
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        int ans=fun(s,t,m,n,dp);
        return ans;
    }
};