int dp[1002][1002];
long long fun(int a[],int i,int j)
{
    if(i>=j)return 0;
    if(dp[i][j]!=-1)return dp[i][j];
    else
    {
        if((j-i+1)%2==0)
    {
        return dp[i][j]= max(a[i]+fun(a,i+1,j),a[j]+fun(a,i,j-1));
    }
    else return dp[i][j]=min(fun(a,i+1,j),fun(a,i,j-1));
    }
}

//Function to find the maximum possible amount of money we can win.
long long maximumAmount(int arr[], int n) 
{
    // Your code here
    int i=0,j=n-1;
    memset(dp,-1,sizeof(dp));
    long long ans=fun(arr,i,j);
    return ans;
}