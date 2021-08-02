//User function template for C++

// A : given string to search
// B : vector of available strings
set<string> m;
int dp[1002][1002];
int fun(string x,int i,int j)
{
    if(i>=1002 || j>=1002)return false;
    if(dp[i][j]!=-1)return dp[i][j];
    else
    {
        if(i>j)return dp[i][j]=1;
    //if(i==j)return true;
    for(int k=1;k<=j-i+1;k++)
    {
        if(m.find(x.substr(i,k))!=m.end() && fun(x,i+k,j)==1)return dp[i][j]= 1;    
    }
    return dp[i][j]= 0;
    }
    
}
int wordBreak(string A, vector<string> &B) {
    //code here
    for(auto st  : B)m.insert(st);
    memset(dp,-1,sizeof(dp));
    return fun(A,0,A.length()-1);
    // if(ans==true)return 1;
    // else return 0;
    
}