#include <bits/stdc++.h>

using namespace std;

class Difference
{
public:
    vector<int> elements;
    int maximumDifference;

    Difference(vector<int> a)
    {
        elements = a;
    }

    void computeDifference()
    {
        int minElement = *min_element(elements.begin(), elements.end());
        int maxElement = *max_element(elements.begin(), elements.end());
        maximumDifference = abs(maxElement - minElement);
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> a;

    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        a.push_back(e);
    }

    Difference d(a);
    d.computeDifference();

    cout << d.maximumDifference << endl;

    return 0;
}
