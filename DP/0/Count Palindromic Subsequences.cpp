class Solution{
    public:
    /*You are required to complete below method */
    long long dp[1002][1002];
    long long countPS(string str,long long i,long long j)
{
 
    if (i > j)
        return 0;
 
    if (dp[i][j] != -1)
        return dp[i][j];
 
    if (i == j)
        return dp[i][j] = 1;
 
    else if (str[i] == str[j])
        return dp[i][j]
               = countPS(str,i + 1, j) +
                countPS(str,i, j - 1) + 1;
 
    else
        return dp[i][j] = countPS(str,i + 1, j) +
                          countPS(str,i, j - 1) -
                          countPS(str,i + 1, j - 1);
}
    long long int  countPS(string str)
    {
       //Your code here
       memset(dp,-1,sizeof(dp));
       return countPS(str,0,str.length()-1);
    }
     
};