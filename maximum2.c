#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numbers[9]; // 0 ~ 8
    int i;
    for (i = 0; i < 9; i++)
    {
        scanf("%d", numbers + i);
    }

    int max = numbers[0];
    int index = 0;
    for (int j = 0; j < 9; j++)
    {
        if (max < numbers[j])
        {
            max = numbers[j];
            index = j;
        }
    }

    printf("%d\n%d", max, index + 1);
    return 0;
}
