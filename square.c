#include <stdio.h>

int main() 
{
    int p1, p2,total;

    printf("Enter the length of the sqare of one side:\n");
    scanf("%d", &p1);

    printf("Enter the length of the sqaure another side:\n");
    scanf("%d", &p2);

    total = p1*p2;

    printf("length 1: %d\n", p1);
    printf("length 2: %d\n", p2);
    printf("The area of square: %d\n", total);
    return 0;
}

