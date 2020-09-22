// Refer is not understand :   https://www.youtube.com/watch?v=F6fd-NKpOeU&t=1064s
//  or https://www.youtube.com/watch?v=xZ9st62u2Yk&list=PLpO3gASfJEIJ6cYs4kAY3SnH2kpohSTZI&index=15
// Approch is to use bfs.
// maintain a queue and map
// we are just traversing using bfs ans join all edges of childs of current node in map
// In simple words we link nodes using map.
// first we insert child nodes in map and then link that with current node
// and if child is already present in map then directly link 


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
        if(!node)return NULL;
        queue<Node *>q;
        q.push(node);
        unordered_map <Node* , Node*>m;
        m[node] = new Node(node->val);
        while(!q.empty())
        {
            Node *t = q.front();
            q.pop();
            for(Node* i : t->neighbors)
            {
                if(m.find(i)==m.end())
                {
                    m[i] = new Node(i->val);
                    q.push(i);
                }
                Node *newNbr = m[i];
                Node *newNode = m[t];
                newNode->neighbors.push_back(newNbr);
            }
        }
        return m[node];
    }
};