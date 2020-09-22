// Insert all the words one by one in the trie. After inserting we perform a walk on the trie.
// In this walk, go deeper until we find a node having more than 1 children(branching occurs) or 0 children (one of the string gets exhausted).
// This is because the characters (nodes in trie) which are present in the longest common prefix must be the single child of its parent, i.e- there should not be branching in any of these nodes.
class Trie {
    struct Trie_Node
    {
        int val;
        int count=0;
        int endsHere=0;
        Trie_Node *child[26]={NULL};
    };
    Trie_Node *root;
    Trie_Node* getNode(int index) 
    {
        Trie_Node *newNode = new Trie_Node();
        newNode->val = index - 'a';
        return newNode;
    }
public:
    
    Trie() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        root = getNode('/' - 'a');
    }
    
    void insert(string word) {
        Trie_Node *curr = root;
        for(int i=0;word[i];i++)
        {
            if(curr->child[word[i]-'a']==NULL)
            {
                curr->child[word[i]-'a'] = getNode(word[i]-'a');
            }
            curr->child[word[i]-'a']->count += 1;
            curr = curr->child[word[i]-'a'];
        }
        curr->endsHere = 1;
    } 
    int count(Trie_Node *curr, int &ind)
    {
        int c = 0;
        for(int i=0;i<26;i++)
        {
            if(curr->child[i] != NULL )  {ind = i; c++;}            
        }
        return c;
    }
    void LCP(string &s)
    {
        Trie_Node *curr = root;
        int i;
        while(count(curr,i)==1&&curr->endsHere!=1)
        {
            curr = curr->child[i];
            s.push_back(i+'a');
        }
    }
    
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        Trie* obj = new Trie();
        string s;
        for(auto i : strs)
        {
            if(i==""){ s.clear();   return s;}
             obj->insert(i);
        }
        obj->LCP(s);    
       return s;    
    }
};
