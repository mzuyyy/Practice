#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(auto &x : arr){
        cin >> x;
    }

    bool flag = 0;
    for(int i = 0 ; i < n-1; ++i)
    {
        for(int j = i + 1; j < n; ++j)
        {
            if( ( arr[i] + arr[j] ) == 0 )
            {
                cout << arr[i] << " " << arr[j];
                flag = 1;
                break;
            }
        }
    }

    if( flag == 0 )
    {
        cout << "0" << endl;
    }

    return 0;
}