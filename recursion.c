#include<stdio.h>

int fun(int num)
{
    if(num != 0)
    {
        return num + fun(num-1);
    }
    else
    {
        return num;
    }
}

int main()
{
    int n;
    printf("Enter an Integer : ");
    scanf("%d", &n);
    int result = fun(n);
    printf("Result : %d", result);
    return 0;
}