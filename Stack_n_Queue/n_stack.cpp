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

struct kstack {
    ll free;
    int *next,*top,*v;
};
struct kstack* create(ll n,ll k)
{
    struct kstack* ff =(struct kstack*)malloc(sizeof(struct kstack));
    ff->free=0;
    ff->top=new int[k];
    ff->next=new int[n];
    ff->v=new int[n];
    for(int i=0;i<k;i++)
    {
        ff->top[i]=-1;
    }
    for(int i=0;i<n-1;i++)
    {
        ff->next[i]=(i+1);
        ff->v[i]=0;
    }
    ff->next[n-1]=(-1);
    ff->v[n-1]=0;
    return ff;
}

struct kstack* push(ll x,ll k,struct kstack* st)
{
    if(st->free==-1)
    {
        cout<<"Stack is Full"<<endl;
        return st;
    }
    else
    {
        cout<<"Pushed"<<endl;
        ll a=st->free;
        st->free=st->next[a];
        st->v[a]=x;
        st->next[a]=st->top[k];
        st->top[k]=a;
        return st;
        
    }
}
/*similarly pop can also be made*/




int main()
{
    struct kstack* st=create(10,3);
    for(int i=0;i<15;i++)
    {
        push(i,2,st);
    }

}