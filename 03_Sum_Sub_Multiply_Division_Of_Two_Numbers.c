#include <stdio.h>

int main() {
    int num1, num2, Sum, Sub, Multiply;
    float Divide;
    printf("Enter Two Numbers/Integers: ");
    scanf("%d %d", &num1, &num2);
    Sum = num1 + num2;
    Sub = num1 - num2;
    Multiply = num1 * num2;
    Divide = num1 / num2;
    printf("Sum: %d\n", Sum);
    printf("Sub: %d\n", Sub);
    printf("Multiply: %d\n", Multiply);
    printf("Divide: %2f\n", Divide);
    printf("Build Productive Everyday");
    return 0;
}