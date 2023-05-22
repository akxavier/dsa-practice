class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> pasc;
        vector<int> row;

        row.push_back(1);
        pasc.push_back(row);
        row.clear();

        for (int i = 2; i <= numRows; i++)
        {
            row.push_back(1);
            for (int j = 1; j < i - 1; j++)
            {
                row.push_back(pasc[i - 2][j - 1] + pasc[i - 2][j]);
            }
            row.push_back(1);

            pasc.push_back(row);
            row.clear();
        }

        return pasc;
    }
};