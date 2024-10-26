#include <stdio.h>
#include <string.h>
int main() {
    char pet[10];
    printf("Do you have a cat or a dog? ");
    scanf("%s", pet);
    if (strcmp(pet, "cat") == 0) {
        printf("A cat says: Meow!\n");
    } else if (strcmp(pet, "dog") == 0) {
        printf("A dog says: Woof!\n");
    } else {
        printf("I don't know that pet:(\n");
    }
    return 0;
}
