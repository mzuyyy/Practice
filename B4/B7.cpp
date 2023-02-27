#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        string res = "";
        res = res + s[i];

        for(int j = 0; j < s.size(); j++)
        {
            res = res + s[j];
            cout << res << " ";

            for(int k = 0; k < s.size(); k++)
            {
                res = res + s[k];
                cout << res << " ";
                res.pop_back();
            }
            res.pop_back();
        }
    }
}