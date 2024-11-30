#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displaySeats(char seats[ROWS][COLS]) {
    printf("Seating Chart:\n");
    printf("   ");
    for (int i = 0; i < COLS; i++) {
        printf("%3d", i + 1);
    }
    printf("\n");
    for (int i = 0; i < ROWS; i++) {
        printf("%2d ", i + 1); 
        for (int j = 0; j < COLS; j++) {
            printf(" %c ", seats[i][j]);
        }
        printf("\n");
    }
}

void bookRandomSeats(char seats[ROWS][COLS], int numSeats) {
    int booked = 0;
    srand(time(NULL)); 
    while (booked < numSeats) {
        int row = rand() % ROWS; 
        int col = rand() % COLS; 

        if (seats[row][col] == 'A') { 
            seats[row][col] = 'B'; 
            printf("Seat booked: Row %d, Seat %d\n", row + 1, col + 1);
            booked++;
        }
 }
}

int main() {
    char seats[ROWS][COLS];
    int numSeats;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            seats[i][j] = 'A';
        }
    }

    printf("Welcome to the Seat Booking System!\n");
    displaySeats(seats);

    printf("Enter the number of seats to book randomly: ");
    scanf("%d", &numSeats);

    if (numSeats > ROWS * COLS) {
        printf("Error: Not enough seats available.\n");
        return 1;
    }

    bookRandomSeats(seats, numSeats);

    printf("\nUpdated ");
    displaySeats(seats);

    return 0;
}
