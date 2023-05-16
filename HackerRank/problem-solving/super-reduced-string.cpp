#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string superReducedString(string s)
{
    int len = s.length();
    int i = -1;

    do
    {
        if (s[i + 1] == s[i + 2])
        {
            s.erase(i + 1, 2);
            len -= 2;

            if (i != -1)
                i--;
            continue;
        }

        i++;
    } while (i <= len - 3);

    if (len == 0)
        return "Empty String";
    else
        return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
