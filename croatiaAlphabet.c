#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *croatia = (char *)malloc(sizeof(char) * 100);
    scanf("%s", croatia);
    printf("operations");
    int length = strlen(croatia);
    int result = length;
    for (int i = 0; i < length; i++)
    {
        if (croatia[i] == "c" && croatia[i + 1] == "=")
            result--;
        if (croatia[i] == "c" && croatia[i + 1] == "-")
            result--;
        if (croatia[i] == "d" && croatia[i + 1] == "z" && croatia[i + 2] == "=")
            result -= 2;
        if (croatia[i] == "d" && croatia[i + 1] == "-")
            result--;
        if (croatia[i] == "l" && croatia[i + 1] == "j")
            result--;
        if (croatia[i] == "n" && croatia[i + 1] == "j")
            result--;
        if (croatia[i] == "s" && croatia[i + 1] == "=")
            result--;
        if (croatia[i] == "z" && croatia[i + 1] == "=")
            result--;
    }
    printf("%d", result);
    printf("%s", )

        return 0;
}
