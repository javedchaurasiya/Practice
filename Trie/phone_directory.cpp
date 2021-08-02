
//some bugs need to be fixed
//giving seg faulkt
struct node
{
    int we;
   // int visited;
    struct node *child[26];
};
struct node *getnode()
{
    struct node *nnode=new node;
    nnode->we=0;
    //nnode->visited=0;
    for(int i=0;i<26;i++)
    {
        nnode->child[i]=NULL;
    }
    return nnode;
}

void insert(struct node *root,string word)
{
    struct node *temp=root;
    for(int i=0;i<word.length();i++)
    {
        //(temp->visited)++;
        if(temp->child[word[i]-'a']==NULL)
        {
            temp->child[word[i]-'a']=getnode();
        }
        temp=temp->child[word[i]-'a'];
    }
    (temp->we)++;
    //return root;
}

void fun(struct node *root,string word,vector<string> &ans)
{
    if(root->we>0)ans.push_back(word);
    for(char ch='a';ch<='z';ch++)
    {
        if(root->child[ch-'a']!=NULL)
        {
            word.push_back(ch);
            fun(root->child[ch-'a'],word,ans);
        }
    }
}

class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        struct node *root=getnode();
        for(int i=0;i<n;i++)
        {
            insert(root,contact[i]);
        }
        string st="";
        vector<vector<string>> ans1;
        //int flag=1;
        struct node *temp=root;
        for(int i=0;i<s.length();i++)
        {
            st.push_back(s[i]);
            vector<string> ans;
            if(temp->child[s[i]-'a']==NULL)
            {
                break;
            }
            temp=temp->child[s[i]-'a'];
            struct node *temp1=temp;
            fun(temp1,st,ans);
            
            ans1.push_back(ans);
        }
        return ans1;
    }
};