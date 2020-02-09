#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number;
    int arr[42] = {0};
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &number);
        arr[number % 42] = 1;
    }
    int result = 0;
    for (int j = 0; j < 42; j++)
    {
        if (arr[j] == 1)
            result++;
    }
    printf("%d", result);
    return 0;
}
