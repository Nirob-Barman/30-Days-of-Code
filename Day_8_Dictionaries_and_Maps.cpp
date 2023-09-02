#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, string> phoneBook;

    for (int i = 0; i < n; i++)
    {
        string name, phoneNumber;
        cin >> name >> phoneNumber;
        phoneBook[name] = phoneNumber;
    }

    string query;
    while (cin >> query)
    {
        if (phoneBook.find(query) != phoneBook.end())
        {
            cout << query << "=" << phoneBook[query] << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
    }
    
    return 0;
}