#include <stdio.h>

int main() {
    int p1, p3	, p4, p5, fuel,journey;

    printf("Distance from delhi to mumbai :\n");
    scanf("%d", &p1);

    printf("Fuel cost:\n");
    scanf("%d", &p3);
    
     printf("Milage of the car:\n");
    scanf("%d", &p4);
    
 printf("speed of car:\n");
    scanf("%d", &p5);
    fuel=p1/p4*p3;
    journey=p1/p5;
    printf("Distance: %d\n", p1);
    printf("Fuel cost: %d\n", p3);
    printf("milage of car: %d\n", p4);
    printf("speed of car: %d\n", p5);
    printf("The total fuel cost: %d\n", fuel);
     printf("The total journey time in hours: %d\n", journey);
    return 0;
}

