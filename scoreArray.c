#include <stdio.h>

int main(int argc, char const *argv[])
{
    int casenumber = 0;
    scanf("%d", &casenumber);
    int result[casenumber];
    for (int a = 0; a < casenumber; a++)
    {
        char scores[81];
        scanf("%s", scores);
        int size = 0;
        for (int i = 0; i < 80; i++)
        {
            if (scores[i] == 'X' || scores[i] == 'O')
            {
                size++;
                continue;
            }

            break;
        }
        int point = 0;
        int arr[size];
        for (int j = 0; j < size; j++)
        {
            if (j == 0)
            {
                if (scores[j] == 'O')
                {
                    arr[j] = ++point;
                    continue;
                }
                else if (scores[j] == 'X')
                {
                    arr[j] = 0;
                    continue;
                }
            }
            if (scores[j] == 'O' && scores[j - 1] == 'O')
            {
                arr[j] = ++point;
            }
            else if (scores[j] == 'X' && scores[j - 1] == 'O')
            {
                point = 0;
                arr[j] = 0;
            }
            else if (scores[j] == 'O' && scores[j - 1] == 'X')
            {
                arr[j] = ++point;
            }
            else if (scores[j] == 'X' && scores[j - 1] == 'X')
            {
                point = 0;
                arr[j] = 0;
            }
        }
        int max = 0;
        for (int k = 0; k < size; k++)
        {
            max += arr[k];
        }
        result[a] = max;
    }

    for (int b = 0; b < casenumber; b++)
        printf("%d\n", result[b]);

    return 0;
}

//틀리고 맞는 문제를 받는 함수

//문제의 누적 점수를 계산하여 합산하는 함수
