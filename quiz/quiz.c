#include <stdio.h>
#include <stdlib.h>

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
}

void display()
{
    int arr;
    FILE *fp;
    fp = fopen("quiz.bin", "rb");
    if (fp == NULL)
    {
        printf("Error Accessing File\n");
        exit(1);
    }

    printf("\nFile quiz.bin berhasil diakses!\n");
    while (fscanf(fp, "%d", &arr) != EOF)
    {
        printf("%-5d", arr);
    }
    printf("\n\n");
    fclose(fp);
}

void sort()
{
    FILE *fp;
    fp = fopen("quiz.bin", "rb");
    if (fp == NULL)
    {
        printf("Error Accessing File\n");
        exit(1);
    }
    int index, arr, cnt = 0;
    printf("Masukan angka yang dicari : ");
    scanf("%d", &index);
    printf("\nFile quiz.bin berhasil diakses!\n");
    while (fscanf(fp, "%d", &arr) != EOF)
    {
        cnt++;
        if (arr == index)
        {
            printf("Nilai %d ditemukan pada index %d\n", arr, cnt);
        }
    }
    printf("\n\n");
    fclose(fp);
}

void inputArray()
{
    FILE *fp;
    int count, arr[10000];
    float sum;
    printf("Masukan jumlah nilai yang akan dimasukan : ");
    scanf("%d", &count);
    fp = fopen("quiz.bin", "w");

    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    bubble(arr, count);
    printf("Nilai Terbesar adalah     : %d\n", arr[count - 1]);
    printf("Nilai Terkecil adalah     : %d\n", arr[0]);
    printf("Nilai Rata-ratanya adalah : %0.1f\n", sum / count);
    printf("Nilai setelah diurutkan   : ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < count; i++)
    {
        fprintf(fp, "%d ", arr[i]);
    }
    fclose(fp);
    printf("Nilai ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("sudah berhasil disimpan pada file quiz.bin\n");
    system("pause");
}

int main()
{
    int menu;
    do
    {
        printf("1. Create\n");
        printf("2. Display\n");
        printf("3. Search\n");
        printf("4. Exit\n");;

        printf("Enter Menu : ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            inputArray();
            break;

        case 2:
            display();
            break;

        case 3:
            sort();
            break;
        }

    } while (menu != 4);
}
