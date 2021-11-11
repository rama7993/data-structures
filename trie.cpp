class Trie {
public:
    class TrieNode{
    public:
    TrieNode* child[26];
    bool is_end;
};
 TrieNode* root;
    Trie() {
        root=new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* temp=root;
        for(char ch:word){
            if(temp->child[ch-'a']==NULL) 
                temp->child[ch-'a']=new TrieNode();
            temp=temp->child[ch-'a'];
        }
        temp->is_end=true;
    }
    
    bool search(string word) {
        TrieNode* temp=root;
         for(char ch:word){
             if(temp->child[ch-'a']==NULL) return false;
             temp=temp->child[ch-'a'];
         }
      return temp->is_end;
    }
    
    bool startsWith(string prefix) {
        TrieNode* temp=root;
         for(char ch:prefix){
             if(temp->child[ch-'a']==NULL) return false;
             temp=temp->child[ch-'a'];
         }
        return true;
    }
};
