#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    long result = a * b * c;
    printf("%ld", result);
    printf("%ld %l;d", result / 10, result % 10);

    return 0;
}
