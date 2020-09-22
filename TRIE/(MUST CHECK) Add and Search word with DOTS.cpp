// Main code is in this function
// bool MyTrie_search(string s,Trie_Node *curr,int pos,int n)

class WordDictionary {
    struct Trie_Node
    {
        int val;
        int count = 0;
        int endsHere = 0;
        Trie_Node *child[26] = {NULL};
    };
    Trie_Node *root=NULL;
    public:
    WordDictionary() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        root = new Trie_Node();
        root->val = '/';
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
        Trie_Node *curr = root;
        for(int i=0;word[i];i++)
        {
            if(curr->child[word[i] - 'a'] == NULL)
            {
                Trie_Node *newNode = new Trie_Node();
                newNode->val = word[i]-'a';
                curr->child[word[i]-'a'] = newNode;
            }
            curr->child[word[i] - 'a']->count += 1;
            curr = curr->child[word[i]-'a'];
        }
        curr->endsHere += 1;
    }

    bool MyTrie_search(string s,Trie_Node *curr,int pos,int n)
    {        
        if(s[pos]=='.')
        {
            bool res = false;
            Trie_Node *current = curr;
            for(int i=0;i<26;++i)
            {
                if(pos==n-1 && curr->child[i])      //agar XXXX. hai to mtlb agr kuch bhi h present to true h
                {
                    current=curr->child[i];
                    res |= current->endsHere>0?true:false;
                }
                else if(curr->child[i] && MyTrie_search(s,curr->child[i],pos+1,n))
                    return true;
            }
            return res;
        }
        else if(curr->child[s[pos]-'a'])
        {
            if(pos==n-1)
            {
                curr = curr->child[s[pos]-'a'];
                return curr->endsHere >0 ?true:false;
            }
            return MyTrie_search(s,curr->child[s[pos]-'a'],pos+1,n);
        }
        return false;
    }
                               
    bool search(string word) {
        Trie_Node *curr = root;
        return MyTrie_search(word,curr,0,word.length());
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */