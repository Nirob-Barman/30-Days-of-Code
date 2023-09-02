#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> binary;
    int current = 0;
    int maxCount = 0;

    while (n > 0)
    {
        int remainder = n % 2;
        if (remainder == 1)
        {
            current++;
            if (current > maxCount)
            {
                maxCount = current;
            }
        }
        else
        {
            current = 0;
        }
        binary.push_back(remainder);
        n = n / 2;
    }

    cout << maxCount << endl;
    return 0;
}