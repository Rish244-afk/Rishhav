#include <stdio.h>

int main() 
{
    int p1, p2,total;

    printf("Enter the lenght:\n");
    scanf("%d", &p1);

    printf("Entre the breath:\n");
    scanf("%d", &p2);

    total = p1*p2;

    printf("Length: %d\n", p1);
    printf("Breath: %d\n", p2);
    printf("The area of rectangle: %d\n", total);

    return 0;
}

