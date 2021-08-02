/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
       if(node==NULL)return NULL;
        else
        {
             vector<Node*> c(200,NULL);
        vector<Node*> c1(200,NULL);
        queue<Node*> q;
        Node* x=node;
        q.push(x);
        vector<int> v(200,0);
        v[node->val]=1;
        while(!q.empty())
        {
            Node* a=q.front();
            q.pop();
            Node* nnode= new Node(a->val);
            c[a->val]=nnode;
            c1[a->val]=a;
            for(auto it : a->neighbors)
            {
                if(v[it->val]==0)
                {
                    v[it->val]=1;
                    q.push(it);
                }
            }
        }
        for(int i=0;i<200;i++)
        {
            v[i]=0;
        }
        while(!q.empty())q.pop();
        // q.clear();
        q.push(node);
        int parent=node->val;
        v[node->val]=1;
        while(!q.empty())
        {
            Node* x=q.front();
            q.pop();
            for(auto it : c1[x->val]->neighbors)
            {
                c[x->val]->neighbors.push_back(c[it->val]);
            }
            for(auto it : x->neighbors)
            {
                if(v[it->val]==0)
                {
                    v[it->val]=1;
                    q.push(it);
                    // ((c[x->val])->neighbors).push_back(c[it->val]);
                    // // c[it->val]->neighbors.push_back(c[x->val]);
                    
                }
                
            }
            
        }
        return c[parent];
        }
        
    }
};