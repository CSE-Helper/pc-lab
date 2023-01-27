#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    //sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("size of double: %zu bytes\n", sizeof(doubleType));
    printf("size of char: %zu bytes\n", sizeof(charType));

    return 0;
}
