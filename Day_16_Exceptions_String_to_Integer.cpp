#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    try
    {
        int result = stoi(s);
        cout << result << endl;
    }
    // catch (const invalid_argument &e)
    // catch (const exception &e)
    catch (...) // Catch all exceptions
    {
        cout << "Bad String" << endl;
    }
    return 0;
}