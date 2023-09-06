#include <bits/stdc++.h>

using namespace std;

int getMaxBitwiseAnd(int n, int k)
{
    int maxVal = 0;
    for (int A = 1; A <= n; A++)
    {
        for (int B = A + 1; B <= n; B++)
        {
            int current = A & B;
            if (current < k && current > maxVal)
            {
                maxVal = current;
            }
        }
    }

    return maxVal;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << getMaxBitwiseAnd(n, k) << endl;
    }

    return 0;
}