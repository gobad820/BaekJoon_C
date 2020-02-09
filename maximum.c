#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    /* code */
    int size;
    scanf("%d", &size);
    long numbers[size];
    for (int j = 0; j < size; j++)
        scanf("%d", numbers + j);
    long max = numbers[0];
    long min = numbers[0];
    for (int i = 0; i < size; i++)
    {
        if (max < numbers[i])
            max = numbers[i];
        if (min > numbers[i])
            min = numbers[i];
    }
    printf("%d %d", min, max);
    return 0;
}
