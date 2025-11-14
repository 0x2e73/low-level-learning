#include <stdio.h>

int main(void) {
    int x = 42;
    int *p = &x;

    printf("Valeur de x: %d\n", x);
    printf("Adresse de x: %p\n", (void*)&x);
    printf("Valeur de p (l'adresse): %p\n", (void*)p);
    printf("Valeur pointée par p: %d\n", *p);

    *p = 100;
    printf("Nouvelle valeur de x: %d\n");

    return 0;   
}