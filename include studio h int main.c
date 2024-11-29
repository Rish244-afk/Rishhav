#include <studio.h>
int main()
{
int a,b,c,avg;
printf ("marks in telugu\n");
scanf ("%d"&a);
printf ("marks in telugu\n");
scanf ("%d"&b);
printf ("marks in telugu\n");
scanf ("%d"&c);
avg=(a+b+c)/3;
if(avg>80)
printf("A grade \n");
else if (avg>60&&avg<=80)
printf ("B grade \n");
else if (avg<=60&&avg>40)
printf ("C grade \n");
else 
printf ("F fail \n");



