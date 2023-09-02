#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[6][6];

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }
    }

    int maxSum = INT_MIN;

    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            int hourglassSum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] +
                               arr[i + 1][j + 1] +
                               arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];

            maxSum = max(maxSum, hourglassSum);
        }
    }

    cout << maxSum << endl;
    return 0;
}