#include<iostream>

using namespace std;

class TrieNode{
    public:

    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch)
    {
        data = ch;

        for (int i = 0;i<26;i++)
        {
            children[i] = NULL;
        }

        isTerminal = false;
    }
};

class Trie{
    public:

    TrieNode* root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertUTIL(TrieNode* root, string word)
    {
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        insertUTIL(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUTIL(root, word);
    }

    bool searchUTIL(TrieNode* root, string word)
    {
        if (word.length() == 0)
        {
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }

        return searchUTIL(child, word.substr(1));
    }

    bool searchWord(string word)
    {
        return searchUTIL(root, word);
    }

    
};

int main()
{
    Trie* t = new Trie();

    t->insertWord("ABCD");
    cout << "Present or not " << t->searchWord("ABCD");

    return 0;
}