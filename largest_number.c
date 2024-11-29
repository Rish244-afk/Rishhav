#include <stdio.h>
int main() 
{
int number1,number2,number3;
printf("Entre the number:\n");
scanf("%d",&number1);
printf("Entre the number:\n");
scanf("%d",&number2);
printf("Entre the number:\n");
scanf("%d",&number3);
if (number1>number2&&number1>number3)
printf("number 1 is big,\n");
else if (number2>number3&&number2>number1)
printf("number2 is big,\n");
else 
printf("number 3 is big");
}
