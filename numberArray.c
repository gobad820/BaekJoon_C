#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool hansoo(int number)
{
    if (number < 100)
        return true;

    if ((number / 100) - (number / 10 - (number / 100) * 10) == (number / 10 - (number / 100) * 10) - number % 10)
        return true;

    if (number == 1000)
        return false;

    return false;
}

int main(int argc, char const *argv[])
{
    /* code */
    int size = 0;
    scanf("%d", &size);
    int result = 0;
    for (int i = 1; i <= size; i++)
    {
        if (hansoo(i))
        {
            //printf("%d\n", i);
            result++;
        }
    }
    printf("%d", result);
    return 0;
}
