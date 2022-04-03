#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001], t[1001];
    int arr[101];
    scanf("%s %s", &s, &t);

    // int len = strlen(s);

    // for (int i = 0; i < len; i++)
    // {
    //     printf("%c\n", s[i]);
    // }
    
    // printf("%d", strcmp(s,t));

    memset(s, 'x', sizeof(s));
    memset(arr, -1, sizeof(arr));
    printf("%c %d\n", s[0], arr[0]);
}