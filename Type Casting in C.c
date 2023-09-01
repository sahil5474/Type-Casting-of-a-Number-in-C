#include <stdio.h>

int main() {
    int a, b;
    float result;

    // Assign integer values to a and b
    a = 10;
    b = 3;

    // Convert 'a' to a float and perform division
    result = (float)a / b;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("Result = %.2f\n", result); // Display the result as a float with 2 decimal places

    return 0;
}
