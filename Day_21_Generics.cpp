#include <bits/stdc++.h>

using namespace std;

// Define a generic function using templates
template <typename Element>
void printArray(vector<Element> elements)
{
    for (int i = 0; i < elements.size(); i++)
        cout << elements[i] << endl;
}

int main()
{
    int n;
    cin >> n;

    vector<int> intArray(n);
    for (int i = 0; i < n; i++)
    {
        cin >> intArray[i];
    }

    cin >> n;
    vector<string> stringArray(n);
    for (int i = 0; i < n; i++)
    {
        cin >> stringArray[i];
    }

    printArray(intArray);
    printArray(stringArray);

    return 0;
}