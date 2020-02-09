#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{

    int firIter;
    scanf("%d", &firIter);
    char alpha[firIter][21];
    int secIter[firIter];

    //for the last time i've never seen before your scip
    for (int i = 0; i < firIter; i++)
    {
        scanf("%d", &secIter[i]);
        scanf("%s", alpha[i]);
    }

    for (int k = 0; k < firIter; k++)
    {
        int j = 0;
        while (true)
        {
            if (alpha[k][j] == '\0')
                break;
            for (int a = 0; a < secIter[k]; a++)
                printf("%c", alpha[k][j]);
            j++;
        }
        printf("\n");
    }

    return 0;
}
