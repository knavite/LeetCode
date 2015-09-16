/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
class Solution {
public:
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        queue<UndirectedGraphNode*> q;
        map<int,UndirectedGraphNode*> m;
        map<int,int> m2;
        if(node==NULL) return NULL;
        q.push(node);
        m[node->label]=new UndirectedGraphNode(node->label);
        while(!q.empty()) {
            UndirectedGraphNode *curr = q.front();
            q.pop();
            
            for(int i=0;i<curr->neighbors.size();i++) {
                if(m[curr->neighbors[i]->label]!=0)
                    continue;
                m[curr->neighbors[i]->label]=new UndirectedGraphNode(curr->neighbors[i]->label);
                q.push(curr->neighbors[i]);
            }
        }
        q.push(node);
        m2[node->label]=1;
        while(!q.empty()) {
            UndirectedGraphNode *curr = q.front();
            q.pop();
            for(int i=0;i<curr->neighbors.size();i++) {
                m[curr->label]->neighbors.push_back(m[curr->neighbors[i]->label]);
                if(m2[curr->neighbors[i]->label]==1) continue;
                m2[curr->neighbors[i]->label] = 1;
                q.push(curr->neighbors[i]);
            }

        }
        return m[node->label];
    }
};