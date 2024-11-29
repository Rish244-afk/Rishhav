#include <stdio.h>

int main() 
{
    int a, i;
    
    printf("Enter the number:\n");
    scanf("%d", &i);
    for (a = 1; a <= i; a += 2)  
    {
        printf("%d\n", a); 
    }
}
