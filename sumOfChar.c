#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int size = 0;
    scanf("%d", &size);
    char alpha[size];
    int arr[size];
    int max = 0;
    scanf("%s", alpha);
    // int len = strlen(alpha);
    // if(len > 10){
    //     for(int k = size - 1 ; k >= 0 ; k--){
    //         if(alpha[k] == '0')

    //     }
    // }
    for (int k = 0; alpha[k] != '\0'; k++)
    {
        if (alpha[k] == '0')
        {
            for (int b = k + 1; b < size; b++)
            {
                alpha[b - 1] = alpha[b];
            }
        }
    }
    long number = atol(alpha);
    for (int i = 0; i < size; i++)
    {
        arr[i] = number % 10;
        number /= 10;
    }
    for (int j = 0; j < size; j++)
        max += arr[j];

    printf("%d", max);
    return 0;
}
