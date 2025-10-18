#include <stdio.h>
// Prototipos
int sumar(int a, int b);
int restar(int a, int b);
void intercambiar(int *x, int *y);

int main() {
    int num1 = 5, num2 = 10;
    printf("Suma: %d + %d = %d\n", num1, num2, sumar(num1, num2));
    printf("Resta: %d - %d = %d\n", num1, num2, restar(num1, num2));
    printf("Antes del intercambio: num1 = %d, num2 = %d\n", num1, num2);
    intercambiar(&num1, &num2);
    printf("Después del intercambio: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}

int sumar(int a, int b) {
    return a + b;
}

void intercambiar(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int restar(int a, int b) {
    return a - b;
}