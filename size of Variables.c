#include<stdio.h>
int main() 
{
    int intvar;
    float floatvar;
    double doublevar;
    char charvar;
    printf("Size of int: %zu bytes\n", sizeof(intvar));
    printf("Size of float: %zu bytes\n", sizeof(floatvar));
    printf("Size of double: %zu bytes\n", sizeof(doublevar));
    printf("Size of char: %zu byte\n", sizeof(charvar));
    return 0;
}
