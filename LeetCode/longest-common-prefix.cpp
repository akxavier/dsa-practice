class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string pre = strs[0];
        string temp = "";
        int i = 0;

        if (strs.size() == 1)
            return pre;

        while (pre.size() > 0)
        {
            i++;
            if (i >= strs.size())
                break;

            for (int j = 0; j < strs[i].size(), j < pre.size(); j++)
            {
                if (strs[i][j] != pre[j])
                {
                    break;
                }
                temp.push_back(pre[j]);
            }

            if (pre != temp)
                pre = temp;
            temp = "";
        }

        return pre;
    }
};

// Trie Implementation
class TrieNode
{
public:
    unordered_map<char, TrieNode *> children;
    bool isEnd = false;

    TrieNode() {}
};

class Trie
{
private:
    TrieNode *root;

public:
    Trie()
    {
        root = new TrieNode();
    }

    TrieNode *getRoot()
    {
        return root;
    }

    void insert(string word)
    {
        TrieNode *currentNode = root;

        for (auto ch : word)
        {
            if (currentNode->children.find(ch) == currentNode->children.end())
            {
                currentNode->children[ch] = new TrieNode();
            }
            currentNode = currentNode->children[ch];
        }

        currentNode->isEnd = true;
    }
};

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        Trie *preTrie = new Trie();

        for (string str : strs)
        {
            preTrie->insert(str);
        }

        string lcp("");
        TrieNode *curr = preTrie->getRoot();

        // till we find a leaf node or end of a word or node with more than 1 children
        while (curr && !curr->isEnd && curr->children.size() == 1)
        {
            auto it = curr->children.begin();
            lcp += it->first;
            curr = it->second;
        }

        return lcp;
    }
};