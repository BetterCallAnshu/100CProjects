#include <stdio.h>
#include <stdint.h>
#include "MyCalculator.h"

int main(void) {
    int32_t num1 = 0, num2 = 0;
    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("----Result----\n");
    printf("Addition is %d\n", funAdd(num1, num2));
    printf("Subtraction is %d\n", funSub(num1, num2));
    printf("Multiplication is %lld\n", funMul(num1, num2));
    printf("Division is %lf\n", funDiv(num1, num2));
    printf("Modulus is %d\n", funMod(num1, num2));

    while(getchar() != '\n');
    getchar();
    return 0;
}
