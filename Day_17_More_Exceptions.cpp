#include <bits/stdc++.h>

using namespace std;

class Calculator
{
public:
    int power(int n, int p)
    {
        if (n < 0 || p < 0)
        {
            throw invalid_argument("n and p should be non-negative");
        }
        return int(pow(n, p));
    }
};

int main()
{
    int T;
    cin >> T;

    Calculator myCalculator;

    while (T--)
    {
        int n, p;
        cin >> n >> p;

        try
        {
            int result = myCalculator.power(n, p);
            cout << result << endl;
        }
        // catch (const invalid_argument &e)
        catch (const exception &e)
        {
            cout << e.what() << endl;
        }
    }
    return 0;
}