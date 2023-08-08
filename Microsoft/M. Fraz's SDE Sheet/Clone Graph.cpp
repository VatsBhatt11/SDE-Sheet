class Solution {
public:
    Node* dfs(Node* &node,unordered_map<Node*,Node*>&m)
    {
        if(m[node])
            return m[node];
        Node* copy=new Node(node->val);
        m[node]=copy;
        for(auto it:node->neighbors)
            copy->neighbors.push_back(dfs(it,m));
        return copy;
    }

    Node* cloneGraph(Node* node) {
        unordered_map<Node*,Node*>m;
        if(!node)
            return NULL;
        return dfs(node,m);
    }
};