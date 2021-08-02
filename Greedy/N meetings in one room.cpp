class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code he
        vector<pair<int,int>> v(n);
        for(int i=0;i<n;i++)
        {
            v[i].first=end[i];
            v[i].second=start[i];
        }
        sort(v.begin(),v.end());
        int ans=1,x=v[0].first;
        for(int i=1;i<n;i++)
        {
            if(v[i].second>x)
            {
                ans++;
                x=v[i].first;
            }
        }
        return ans;
        
    }
};