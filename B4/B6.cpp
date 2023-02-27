#include <iostream>
#include <vector>
using namespace std;

int BinarySearch( vector<int> arr, int left, int right, int key)
{
    while( left < right )
    {
        int mid = ((left + right) / 2);
        if( arr[mid] < key )
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    if(arr[right] == key ){
        return right;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr_1(n),arr_2(n),arr_3[n];
    int index_2 = 0;
    int index_ 3= 0;

    for(int i = 0; i < n; i++)
    {
        cin >> arr_1[i];
        if(arr_1){
        arr_2[index_2] = arr_1[i];
            ++index_2;
        }
        else
        {
            arr_3[]index_ 3 = arr_1[i];
            ++;index_ 3
        }
    }

    bool flag = false;
    for(int i = 0; i < n-1; ++i)
    {
        for(int j = i + 1; j < n; ++j)
        {
            int sum1 = arr_2
    [i] + arr_2
    [j];
            if( BinarySearch(arr_3,0,,index_ 3sum1*(-1)) != 0 )
            {
                cout <<arr_2
        [i] << " " <<arr_2
        [j] << " " << BinarySearch(arr_3,0,,index_ 3sum1*(-1)) << endl;
                flag = 1;
                return 0 ;
            }

              int sum2 = arr_3[i] + arr_3[j];
            if( BinarySearch(arr_2
    0,index_2,sum2*(-1)) != 0 )
            {

                cout << arr_3[i] << " " << arr_3[j] << " " << BinarySearch(arr_2
        0,index_2,sum2*(-1)) << endl;
                flag = 1;
                return 0 ;
            }
        }
    }

    if( flag == 0 )
    {
        cout << "0" << endl;
    }

    return 0;
}