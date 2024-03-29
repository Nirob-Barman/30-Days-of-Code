#include <bits/stdc++.h>

using namespace std;

class AdvancedArithmetic
{
public:
    virtual int divisorSum(int n) = 0;
};

class Calculator : public AdvancedArithmetic
{
public:
    int divisorSum(int n)
    {
        int sum = 0;

        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
                if (i != n / i)
                {
                    sum += n / i;
                }
            }
        }

        return sum;
    }
};

int main()
{
    int n;
    cin >> n;

    Calculator myCalculator;
    int sum = myCalculator.divisorSum(n);

    cout << "I implemented: AdvancedArithmetic" << endl;
    cout << sum << endl;
    return 0;
}