#include <stdio.h>
int main() {
    int guess; // Kullanıcının tahmini
    int secretNumber = 3;
    printf("Guess a number between 1 and 5: ");
    scanf("%d", &guess);
    if (guess == secretNumber) {
        printf("Congratulations! You guessed it right.\n");
    } else {
        printf("Sorry, you guessed wrong. The correct number was %d.\n", secretNumber);
    }
    return 0;
}

