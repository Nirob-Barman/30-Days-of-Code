#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char s[10001];
        scanf("%s", s);

        int len = strlen(s);

        for (int i = 0; i < len; i += 2)
        {
            printf("%c", s[i]);
        }

        printf(" ");

        for (int i = 1; i < len; i += 2)
        {
            printf("%c", s[i]);
        }

        printf("\n");
    }
    return 0;
}