#include <stdio.h>
int main() 
{
int number1,number2,number3,avg;
printf("coefficeint of x^2:\n");
scanf("%d",&number1);
printf("coefficient of y:\n");
scanf("%d",&number2);
printf("c value:\n");
scanf("%d",&number3);
avg=(number2-4*number1*number3);
printf("the quadratic eq: %d",avg);
if (avg==0)
printf("your point are :0,\n");
else if (avg<0)
printf("your points are :20,\n");
else if (avg>0)
printf("your points are :10,\n");
else
printf("no points good luck nxt time,\n");
}
