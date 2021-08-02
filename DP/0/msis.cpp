class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    int dp[n];
	    for(int i=0;i<n;i++)dp[i]=arr[i];
	    for(int i=1;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            if(arr[j]<arr[i] && dp[i]< dp[j]+arr[i])
	            {
	                dp[i]=dp[j]+arr[i];
	            }
	        }
	    }
	    int ans=*(max_element(dp,dp+n));
	    return ans;
	}  
};