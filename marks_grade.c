#include <stdio.h>
int main() 
{
int number1,number2,number3,avg;
printf("marks in maths:\n");
scanf("%d",&number1);
printf("marks in science:\n");
scanf("%d",&number2);
printf("marks in english:\n");
scanf("%d",&number3);
avg=(number1+number2+number3)/3;
printf("the avg marks is : %d",avg);
if (avg>80)
printf("grade:A,\n");
else if (avg>60&&avg<=80)
printf("grade:B,\n");
else if (avg>40&&avg<60)
printf("grade:C,\n");
else
printf("grade:F,\n");
}
