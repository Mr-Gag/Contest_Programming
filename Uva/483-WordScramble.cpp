#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin, s))
    {
        string res;
        istringstream ss(s);
        string c;
        while(ss >> c)
        {
            for(int i = c.length() - 1; i >= 0; i--)
                res += c[i];
            res += " ";
        }
        res.erase(res.length() - 1);
        cout << res << endl;
    }
    return 0;
}
