#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int guess;
    int correctNumber;
    srand(time(0));
    correctNumber = rand() % 5 + 1;
    printf("Guess a number between 1 and 5: ");
    scanf("%d", &guess);
    if (guess == correctNumber) {
        printf("Perfect! You guessed it right.\n");
    } else {
        printf("Sorry:(, you guessed wrong. The correct number was %d.\n", correctNumber);
    }
    return 0;
}
