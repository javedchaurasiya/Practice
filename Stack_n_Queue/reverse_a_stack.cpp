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

void f2(stack<int> &st,int x)
{
    if(st.empty())
    {
        st.push(x);
    }
    else{
        int a=st.top();
        st.pop();
        f2(st,x);
        st.push(a);
    }
}
void f1(stack<int> &st)
{
    if(!st.empty())
    {
        int x=st.top();
        st.pop();
        f1(st);
        f2(st,x);
    }
}
void print(stack<int> st)
{
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main()
{
    stack<int> st;
    for(int i=0;i<10;i++)
    {
        st.push(i+1);
    }
    f2(st,15);
    f2(st,20);
    print(st);
    f1(st);
    print(st);

}