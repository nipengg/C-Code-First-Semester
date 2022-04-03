#include<stdio.h>
#include<stdlib.h>

int main()
{
   int i, a, sum = 0;
   printf("Enter number input: ");
   scanf("%d", &a);
   int x[a];
   printf("Enter %d numbers: \n", a);
   
   for(i = 0; i < a; i++){
   // scanf("%d", &x[i]);
      scanf("%d", x+i);

   // sum += x[i]
      sum += *(x+i);
   }

   printf("Sum = %d", sum);

   return 0;
}