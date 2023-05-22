class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        vector<string> grp, temp;

        temp = strs;
        for (int i = 0; i < temp.size(); i++)
        {
            sort(temp[i].begin(), temp[i].end());
        }

        while (temp.size() > 0)
        {
            grp.clear();
            string str = temp[0];
            auto pos = temp.begin();
            do
            {
                int index = distance(temp.begin(), pos);
                grp.push_back(strs[index]);
                strs.erase(strs.begin() + index);
                temp.erase(temp.begin() + index);
                pos = find(temp.begin(), temp.end(), str);
            } while (pos != temp.end());

            ans.push_back(grp);
        }

        return ans;
    }
};

// better solution
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> table;

        for (auto str : strs)
        {
            string temp = str;
            sort(temp.begin(), temp.end());
            table[temp].push_back(str);
        }

        for (auto vect : table)
        {
            ans.push_back(vect.second);
        }

        return ans;
    }
};