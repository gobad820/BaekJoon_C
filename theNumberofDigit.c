#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int numbers[3];
    for (int i = 0; i < 3; i++)
        scanf("%d", numbers + i);
    int result = numbers[0] * numbers[1] * numbers[2];
    printf("%d", result);
    int digit[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int num;
    while (true)
    {
        num = result % 10;
        switch (num)
        {
        case 0:
            digit[0]++;
            break;
        case 1:
            digit[1]++;
            break;
        case 2:
            digit[2]++;
            break;
        case 3:
            digit[3]++;
            break;
        case 4:
            digit[4]++;
            break;
        case 5:
            digit[5]++;
            break;
        case 6:
            digit[6]++;
            break;
        case 7:
            digit[7]++;
            break;
        case 8:
            digit[8]++;
            break;
        case 9:
            digit[9]++;
            break;
        default:
            break;
        }
        result = result / 10;
        if (result == 0)
            break;
    }
    for (int i = 0; i < 10; i++)
        printf("%d", digit[i]);

    return 0;
}
