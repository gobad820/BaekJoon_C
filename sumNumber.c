#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void delete (char *number, int index)
{
    memmove(number + index, number + index + 1, strlen(number) - index);
}

int main(int argc, char const *argv[])
{
    /* code */
    int size = 0;
    scanf("%d", &size);
    char number[size];
    scanf("%s", number);
    int realsize = size;
    for (int i = 0; i < size; i++)
    {
        if (number[i] == '0')
        {
            delete (number, i);
            i--;
            realsize--;
        }
    }
    int max = 0;
    for (int j = 0; j < realsize; j++)
    {
        max += number[j] - '0';
    }
    printf("%d", max);
    return 0;
}
