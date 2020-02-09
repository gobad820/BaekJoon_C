#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int length = 1000000;
    char alpha[length];
    int alphabet[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    scanf("%s", alpha);
    int max = alphabet[0];
    for (int j = 0; alpha[j] != '\0'; j++)
    {
        for (int i = 0; i < 26; i++)
        {
            if (alpha[j] == 'a' + i)
                alphabet[i]++;
        }
    }
    int index;
    for (int a = 1; a < 26; a++)
    {
        if (max < alphabet[a])
        {
            index = a;
            max = alphabet[a];
        }
    }
    char result = 'a' + index;
    printf("%d", max);
    int check = 0;
    for (int b = 0; b < 26; b++)
    {
        if (max == alphabet[b])
        {
            printf("%d\n", b);
            check++;
        }
        if (check > 1)
            result = '?';
    }

    printf("%c", result);
    return 0;
}
