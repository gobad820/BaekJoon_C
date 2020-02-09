#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int number;
    int iter;
    scanf("%d", &iter);
    for (int i = 0; i < iter; i++)
    {
        char strings[101];
        int alphabet[26] = {0};
        scanf("%s", strings);
        for (int j = 0; j < strlen(strings); j++)
        {
            for (int a = 0; a < 26; a++)
            {
                if (strings[j] == 'a' + a)
                {
                    alphabet[a]++;
                    break;
                }
            }
            if( j != 0 strings[j-1])
        }
        for (int b = 0; b < 26; b++)
            printf("%d", alphabet[b]);
    }

    return 0;
}
