#include "MyCalculator.h"

int32_t funAdd(int32_t num1, int32_t num2) {
    return num1 + num2;
}

int32_t funSub(int32_t num1, int32_t num2) {
    return num1 - num2;
}

long long int funMul(int32_t num1, int32_t num2) {
    return (long long int) num1 * num2;
}

double funDiv(int32_t num1, int32_t num2) {
    if (num2 == 0) {
        printf("Error: number divided by 0!\n");
        return 0;
    } else {
        return (double) num1 / num2;
    }
}

int32_t funMod(int32_t num1, int32_t num2) {
    if (num2 == 0) {
        printf("Error: number divided by 0!\n");
        return 0;
    } else {
        return num1 % num2;
    }
}

