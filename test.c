#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double a,b;
    char op;

    scanf("%lf %c %lf", &a, &op, &b);
    if(op == '+'){
        printf("%.0lf + %.0lf = %.2lf", a,b,a+b);
    }
    else if(op == '-'){
        printf("%.0lf - %.0lf = %.2lf", a,b,a-b);
    }
    else if(op == '*'){
        printf("%.0lf * %.0lf = %.2lf", a,b,a*b);
    }
    else if(op == '/'){
        printf("%.0lf / %.0lf = %.2lf", a,b,a/b);
    }
    else if(op == '^'){
        printf("%.0lf ^ %.0lf = %.2lf", a,b, pow(a,b));
    }
    else{
        printf("Masukan Operator dengan benar");
    }
    
    // ARRAY
    // int n[100];
    // int a, b;
    
    // for(a = 0; a < 10; a++){
    //     n[a] = a + 0;
    // }

    // for(b = 0; b < 10; b++){
    //     printf("Element[%d] = %d\n", b, n[b]);
    // }

    //PRINT
    // char characterName[] = "John";
    // int characterAge = 35;
    // printf("Hello World. My Name is %s\n", characterName);
    // printf("I'm %d years old.\n", characterAge);
    // printf("My favorite %s is %d\n\n", "number", 69);

    //INPUT
    // char name[15];
    // char id[15];
    // double ipk;
    // char gender[15];

    // printf("Name : ");
    // scanf("%[^\n]", name); 

    // printf("ID : ");
    // scanf("%s", id); 

    // printf("Gender : ");
    // scanf("%s", gender); 

    // printf("IPK : ");
    // scanf("%lf", &ipk); 
    
    // printf("My name is %s\n", name);
    // printf("My id is %s\n", id);
    // printf("I'm a %s\n", gender);
    // printf("I got %.2lf IPK\n", ipk);

    //MATH
    // int a;
    // scanf("%d", &a);
    // int b = pow(a, 2);
    // printf("%d Pangkat 2 adalah %d\n",a ,b);

    // int c = 5;
    // int num = ++c;
    // printf("%d\n", num);
    // num = --c;
    // printf("%d\n", num);

    // int i = 4;
    // i+=2;
    // printf("%d", i);

    // int a,b,c;
    // scanf("%d", &a);
    // for (int i = 1; i <= a; i++)
    // {
    //     printf("Masukan angka %d : ", i);
    //     scanf("%d", &b);
    // }

}