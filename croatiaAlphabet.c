#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char croatia[101];
    scanf("%s", croatia);
    int length = strlen(croatia);
    int result = length;
    for (int i = 0; i < length; i++)
    {
        if (croatia[i] == 'c' && croatia[i + 1] == '=')
        {
            i++;
            result--;
        }
        if (croatia[i] == 'c' && croatia[i + 1] == '-')
        {
            i++;
            result--;
        }
        if (croatia[i] == 'd' && croatia[i + 1] == 'z' && croatia[i + 2] == '=')
        {
            i++;
            i++;
            result--;
            result--;
        }
        if (croatia[i] == 'd' && croatia[i + 1] == '-')
        {
            i++;
            result--;
        }
        if (croatia[i] == 'l' && croatia[i + 1] == 'j')
        {
            i++;
            result--;
        }
        if (croatia[i] == 'n' && croatia[i + 1] == 'j')
        {
            i++;
            result--;
        }
        if (croatia[i] == 's' && croatia[i + 1] == '=')
        {
            i++;
            result--;
        }
        if (croatia[i] == 'z' && croatia[i + 1] == '=')
        {
            i++;
            result--;
        }
    }
    printf("%d", result);

    return 0;
}
