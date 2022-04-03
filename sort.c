#include <stdio.h>

// Neville Cornelius Tjampan
// 2540121700

void bubble(int num[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    printf("Menggunakan Bubble Sort    : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
}

void selection(int num[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minimal = i;
        for (int j = 0; j < i; j++)
        {
            if (num[j] > num[minimal])
            {
                minimal = j;
            }
        }
        int temp = num[minimal];
        num[minimal] = num[i];
        num[i] = temp;
    }
    printf("Menggunakan Selection Sort : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
}

void insertion(int num[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int k = num[i];
        int j = i - 1;
        while (k < num[j] && j >= 0)
        {
            num[j + 1] = num[j];
            j--;
        }
        num[j + 1] = k;
    }
    printf("Menggunakan Insertion Sort : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
}

int main()
{
    int num[] = {80, 40, 20, 76, 11, 35};
    int size = sizeof(num) / sizeof(num[0]);
    printf("Metode-metode efisien untuk melakukan sort data pada suatu array : \n");
    bubble(num, size);
    selection(num, size);
    insertion(num, size);
    system("pause");
}