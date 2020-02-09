#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int dbkar(int number)
{
    int sum = 0;
    int original = number;
    while (true)
    {
        sum += number % 10;
        if (number / 10 == 0)
            break;

        number = number / 10;
    }
    sum = original + sum;
    return sum;
}

int main(int argc, char const *argv[])
{
    /* code */
    int numbers[10000] = {0};
    for (int i = 0; i < 10000; i++)
    {
        if (dbkar(i) > 10000)
            continue;

        numbers[dbkar(i)] = 1;
    }
    for (int j = 0; j < 10000; j++)
    {
        if (numbers[j] != 1)
        {
            printf("%d\n", j);
        }
    }
    return 0;
}
