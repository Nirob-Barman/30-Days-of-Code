#include <bits/stdc++.h>

using namespace std;

int main()
{
    int dayReturned, monthReturned, yearReturned;
    int dayDue, monthDue, yearDue;

    cin >> dayReturned >> monthReturned >> yearReturned;
    cin >> dayDue >> monthDue >> yearDue;

    int fine = 0;

    if (yearReturned > yearDue)
    {
        fine = 10000;
    }
    else if (yearReturned == yearDue && monthReturned > monthDue)
    {
        fine = 500 * (monthReturned - monthDue);
    }
    else if (yearReturned == yearDue && monthReturned == monthDue && dayReturned > dayDue)
    {
        fine = 15 * (dayReturned - dayDue);
    }

    cout << fine << endl;
    
    return 0;
}