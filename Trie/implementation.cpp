#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp> 
// #include<ext/pb_ds/tree_policy.hpp>
#define ll long long
#define ull unsigned long long
#define all(v) v.begin(),v.end()
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define mll multiset<ll>
#define sll set<ll>
#define mpll map<ll,ll>
#define deb(x) cout<< #x <<":" <<" "<<x<<endl;
// #define pbdspair tree<pair<ll,ll>, null_type,less<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update>
// #define pbds tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;

struct node
{
    int we;
    struct node *child[26];
};
struct node *getnode()
{
    struct node *nnode=new node;
    nnode->we=0;
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
        if(temp->child[word[i]-'a']==NULL)
        {
            temp->child[word[i]-'a']=getnode();
        }
        temp=temp->child[word[i]-'a'];
    }
    (temp->we)++;
}

bool search(struct node *root,string word)
{
    struct node *temp=root;
    for(int i=0;i<word.length();i++)
    {
        if(temp->child[word[i]-'a']==NULL)return false;
        temp=temp->child[word[i]-'a'];
    }
    if(temp->we>0)return true;
    else return false;
}

void remove(struct node *root,string word)
{
    struct node *temp=root;
    for(int i=0;i<word.length();i++)
    {
        if(temp->child[word[i]-'a']==NULL)return;
        temp=temp->child[word[i]-'a'];
    }
    if(temp->we>0)(temp->we)--;
    return;
}


int main()
{
    vector<string> words={"abc","ab","bc","bca","ab"};
}