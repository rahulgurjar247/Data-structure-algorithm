#include <iostream>
using namespace std;

int main()
{
    int arr1[2][2], arr2[2][2], arr3[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "enter arr[" << i << "]" << "[" << j << "]";
            cin >> arr1[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "enter arr2" << i << "]" << "[" << j << "]";
            cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            arr3[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                arr3[i][j] = arr3[i][j] + arr1[i][k] * arr2[k][j];
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout <<arr3[i][j]<<" ";           
        }
        cout << "\n";
    }
    return 0;
}