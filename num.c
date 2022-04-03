#include <stdio.h>
#include<stdlib.h>

int main()
{
    int a[1001], b, sum;

    scanf("%d", &b);

    for (int i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("%d\n", sum);
}