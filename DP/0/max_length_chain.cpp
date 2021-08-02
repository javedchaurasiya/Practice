/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

/*You are required to complete this method*/

int maxChainLen(struct val p[],int n)
{
    //Your code here
    vector<int> dp(n,1);
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        v.push_back({p[i].first,p[i].second});
    }
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(v[i].first>v[j].second)
            {
                dp[i]=max(dp[i],1+dp[j]);
            }
        }
    }
    int ans=*max_element(dp.begin(),dp.end());
    return ans;

}