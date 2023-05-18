#include <bits/stdc++.h>

using namespace std;

bool containsDuplicate(vector<int> nums)
{
    sort(nums.begin(), nums.end());
    int i = 0;
    while (i < nums.size() - 1)
    {
        if (nums[i] == nums[i + 1])
        {
            return true;
        }
        i++;
    }

    return false;
}

int main()
{
    int n, elem;
    vector<int> v;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> elem;
        v.push_back(elem);
    }

    containsDuplicate(v) ? printf("True") : printf("False");
}