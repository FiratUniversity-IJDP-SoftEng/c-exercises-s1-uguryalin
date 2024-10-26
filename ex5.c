#include <stdio.h>

void sayHello(char name[]) {
    printf("Hello, %s!\n", name);
}
int main() {
    char name[50];
    printf("Please enter your name: ");
    scanf("%s", name);
    sayHello(name);
    return 0;
}
