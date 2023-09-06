#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<string> gmailNames;
    regex pattern(".*@gmail.com$");

    for (int i = 0; i < n; ++i)
    {
        string firstName, email;
        cin >> firstName >> email;

        // Check if the email matches the Gmail pattern
        if (regex_match(email, pattern))
        {
            gmailNames.push_back(firstName);
        }
    }
    
    sort(gmailNames.begin(), gmailNames.end());
    for (auto name : gmailNames)
    {
        cout << name << endl;
    }

    return 0;
}