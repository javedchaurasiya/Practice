class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        unordered_map<string,int> m;
        for(auto x : wordList)
        {
            m[x]=1;
        }
        queue<pair<string,int>> q;
        q.push({beginWord,0});
        while(!q.empty())
        {
            pair<string,int> p=q.front();
            q.pop();
            if(p.first==endWord)return p.second+1;
            string st=p.first;
            for(int i=0;i<st.length();i++)
            {
                string st=p.first;
                for(char ch='a';ch<='z';ch++)
                {
                    st[i]=ch;
                    if(m[st]==1)
                    {
                        q.push({st,p.second+1});
                        m[st]=0;
                    }
                }
            }
        }
        return 0;
    }
};