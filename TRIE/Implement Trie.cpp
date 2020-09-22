// If any Doubt : Just Watch https://www.youtube.com/watch?v=xqsaAhQC6c8 
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
        curr->endsHere += 1;
    }
    
    bool search(string word) {
        Trie_Node *curr = root;
        for(int i=0;word[i];i++)
        {
            if(curr->child[word[i]-'a'] == NULL)    return false;
            curr = curr->child[word[i]-'a'];
        }
        return (curr->endsHere>1);
    }
    
    bool startsWith(string prefix) {
        Trie_Node *curr = root;
        for(int i=0;prefix[i];i++)
        {
            if(curr->child[prefix[i]-'a']==NULL)    return false;
            curr = curr->child[prefix[i]-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */