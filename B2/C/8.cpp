#include <iostream>
#include <vector>

std::vector<int> temp, count;
long long res[3][100000];

int main(){
    std::string s;
    std::cin >> s;
    int n = s.size();
    int index = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == s[i + 1] && i + 1 < n)
            temp[1 + index]++;
        else {
            count[1 + index] = s[i]; 
             temp[1 + index++]++;
        }
    n = index;
    res[0][0] = 1LL;
    for (int i = 0; i < n; i++) 
    {
        res[0][i + 1] += res[0][i];
        res[1][i + 1] += res[1][i];
        res[2][i + 1] += res[2][i];
        if (temp[i + 1] >= 2)
            res[2][i + 1] += res[0][i];
        if (temp[i + 1] >= 1)
            if (i + 2 <= n && temp[i + 1] == 1 && count[i] == count[i + 2])
                res[2][i + 2]--;
        res[1][i + 1] += res[0][i];
        res[2][i + 1] += res[1][i];
    }
    std::cout << res[2][n];
    return 0;
}