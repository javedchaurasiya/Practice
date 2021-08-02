class Solution {
  public:
    long long int countBT(int h) { 
        // code here
        long long int dp[h+1];
        dp[0]=dp[1]=1;
        long long int m=1000000000+7;
        for(int i=2;i<=h;i++)
        {
            dp[i]=((2*((dp[i-1]%m)*(dp[i-2]%m))%m)%m+(((dp[i-1]%m)*(dp[i-1]%m))%m)%m)%m;
        }
        return dp[h];
    }
};