#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n % 2 == 1 || (n % 2 == 0 && n >= 6 && n <= 20))
        printf("Weird\n");
    else if (n % 2 == 0 && ((n >= 2 && n <= 5) || n > 20))
        printf("Not Weird\n");
}