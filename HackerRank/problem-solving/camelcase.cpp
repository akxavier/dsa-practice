#include <bits/stdc++.h>

using namespace std;

int camelcase(string s)
{
    int count = 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            count++;
        }
    }

    return count;
}

int main()
{
    string s;
    cin >> s;

    cout << camelcase(s);

    return 0;
}
