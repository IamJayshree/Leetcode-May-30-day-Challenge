class Trie {
public:
    /** Initialize your data structure here. */
    
     struct TrieNode{
        TrieNode *children[26];
        bool endOfWord;
    };
    
    TrieNode *root = NULL;
    
    TrieNode* getNode(void){
        TrieNode *pNode = new TrieNode;
        pNode->endOfWord = false;
        
        for(int i = 0;i < 26;++i)
            pNode->children[i] = NULL;
        
        return pNode;
    }
    
    
    Trie() {
        root = getNode();
    }
     
    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode *tramp = root;
        for(int i = 0;i < word.size(); i++){
            int index = word[i] - 'a';
            if(!tramp->children[index])
                tramp->children[index] = getNode();
            
            tramp = tramp->children[index];
        }
        tramp->endOfWord = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
         TrieNode *tramp = root;
        for(int i = 0;i < word.size(); i++){
            int index = word[i] - 'a';
            if(!tramp->children[index])
                return false;
            tramp = tramp->children[index];
        }
        return (tramp != NULL && tramp->endOfWord);
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode *tramp = root;
        for(int i = 0;i < prefix.size(); i++){
            int index = prefix[i] - 'a';
            if(!tramp->children[index])
                return false;
            tramp = tramp->children[index];
        }
        return (tramp != NULL);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
