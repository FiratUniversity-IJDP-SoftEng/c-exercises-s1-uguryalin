#include <stdio.h>

int main() {
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);
    for (int i = 0; i < age; i++) {
        printf("%d. Happy Birthday!\n", i+1);
    }
    return 0;
}
