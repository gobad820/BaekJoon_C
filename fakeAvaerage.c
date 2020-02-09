#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number = 0;
    scanf("%d", &number);
    float scores;
    float sum = 0;
    float maxScore = 0;
    for (int i = 0; i < number; i++)
    {
        scanf("%f", &scores);
        if (maxScore <= scores)
            maxScore = scores;
        sum += scores;
    }
    float average = ((sum / maxScore) * 100) / number;
    printf("%.2f", average);

    return 0;
}
