#include<stdio.h>
#include<stdlib.h>

double cube(double num)
{
    return num * num * num;
}

void swap(int* n1, int* n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int addOne(int a)
{
    a++;
    return a;
}

int main()
{
    printf("Result : %lf\n", cube(5));
    int num1 = 5;
    int num2 = 10;
    int num = 5;
    swap(&num1, &num2);
    printf("Num 1 = %d\n", num1);
    printf("Num 2 = %d\n", num2);
    printf("Num = %d", addOne(num));
    return 0;
}