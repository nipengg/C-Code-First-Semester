#include <stdio.h>
#include <stdlib.h>
// %[^;];%[^;];%d\r\n
typedef struct student{
    char id[20];
    char name[20];
    int age;
}student;

typedef struct jurusan{
    char id[20];
    int angkatan;
    char jurusan[20];
}jurusan;

void create()
{
    student *s;
    jurusan *p;
    FILE *fp;
    FILE *fptr;
    int n, i, j;
    printf("Enter how many student you want to create? : ");
    scanf("%d", &n);

    s = (student*)calloc(n, sizeof(student));
    p = (jurusan*)calloc(n, sizeof(jurusan));
    fp = fopen("student.bin", "a");
    fptr = fopen("jurusan.bin", "a");

    for (int i = 0; i < n; i++)
    {
        printf("Student #%d : \n", i + 1);
        fflush(stdin);
        printf("Enter ID                : ");
        scanf("%[^\n]s", s[i].id);
        fflush(stdin);
        printf("Enter Name              : ");
        scanf("%[^\n]s", s[i].name);
        fflush(stdin);
        printf("Enter Age               : ");
        scanf("%d", &s[i].age);
        fwrite(&s[i], sizeof(student), 1, fp);
        fflush(stdin);
        printf("Enter ID Jurusan        : ");
        scanf("%[^\n]s", p[i].id);
        fflush(stdin);
        printf("Enter Name Jurusan      : ");
        scanf("%[^\n]s", p[i].jurusan);
        if (s[i].age == 18)
        {
            p[i].angkatan = 2024;
        }
        else
        {
            int age = s[i].age - 18;
            p[i].angkatan = 2024 - age;
        }
        fwrite(&p[i], sizeof(jurusan), 1, fptr);
    }
    fclose(fp);
    fclose(fptr);
}

void display()
{
    student s1;
    jurusan j1;
    FILE *fp;
    FILE *fptr;
    fp = fopen("student.bin", "r");
    fptr = fopen("jurusan.bin", "r");
    if (fp == NULL && fptr == NULL)
    {
        printf("[ERROR] File does not exist. Type 1 to create file\n");
    }
    else
    {
        int j;
        printf("\n===================================================\n");
        while (fread(&s1, sizeof(student), 1, fp) && fread(&j1, sizeof(jurusan), 1, fptr))
        {
            printf("%-13s%-10s%-5dBINUSIAN%-7d%-10s\n", s1.id, s1.name, s1.age, j1.angkatan, j1.jurusan);
        }
        printf("===================================================\n\n");
        fclose(fp);
        fclose(fptr);
    }
}

void displayJurusan()
{
    jurusan j1;
    FILE *fptr;
    fptr = fopen("jurusan.bin", "r");
    if (fptr == NULL)
    {
        printf("[ERROR] File does not exist. Type 1 to create file\n");
    }
    else
    {
        int j;
        printf("\n===================================================\n");
        while (fread(&j1, sizeof(jurusan), 1, fptr))
        {
            printf("%-7s%-10s\n", j1.id, j1.jurusan);
        }
        printf("===================================================\n\n");
        fclose(fptr);
    }
}

int main()
{
    int menu;
    do
    {
        printf("===============\n");
        printf("     Menu\n");
        printf("===============\n");
        printf("1. Create\n");
        printf("2. Display Siswa\n");
        printf("3. Display Jurusan\n");
        printf("4. Exit\n");;

        printf("Enter Menu : ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            create();
            break;

        case 2:
            display();
            break;

        case 3:
            displayJurusan();
            break;
        }

    } while (menu != 4);
}