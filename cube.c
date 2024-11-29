#include <stdio.h>

int main() {
    int p1,total;

    printf("Enter the lenght of the side:\n");
    scanf("%d", &p1);

    total = 6*p1*p1;

    printf("The dside of the cube: %d\n", p1);
    printf("The area of the cube: %d\n", total);

    return 0;
}

