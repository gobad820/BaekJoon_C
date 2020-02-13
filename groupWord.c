// #include <stdio.h>
// #include <string.h>

// int main(int argc, char const *argv[])
// {
//     int iteration;
//     int result = iteration;
//     for (int i = 0; i < iteration; i++)
//     {
//         char word[100];
//         int alpha[26] = {0};
//         scanf("%s", word);
//         for (int j = 0; j < strlen(word); j++)
//         {
//             if (alpha[word[j] - 'a'] == 0)
//                 alpha[word[j] - 'a']++;
//             if (j > 0)
//             {
//                 if (alpha[word[j] - 'a'] != 0 && word[j] == word[j - 1])
//                 {
//                     result--;
//                     break;
//                 }
//             }
//         }
//     }
//     printf("%d", result);

// }

// // 반복 횟수 입력
// // 횟수 반복{
// //     특정 문자열 입력
// //     문자열 길이만큼 반복{
// //         문자여링 그룹 단어인지 확인
// //         그룹 단어이면 결과 + 1
// //     }
// // }
// // 결과 출력

// // TODO:
// // 그룹 단어 확인
// // 1. 문자가 처음 나온 경우
// //  해당되는 알파 정수 배열에 1플러스
// // 2. 문자가 처음은 아니지만 이전 문자와 같은 문자인 경우
// // 반복

// // 3. 문자가 처음도 아니면서 이전 문자와 다른 경우 그룹 단어 제외

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int iteration;
    scanf("%d", &iteration);
    int result = iteration;
    int al[26] = {0};
    for (int i = 0; i < iteration; i++)
    {
        char *alpha = (char *)malloc(sizeof(char) * 101);
        scanf("%s", alpha);
        for (int j = 0; j < strlen(alpha); j++)
        {
            printf("%c", alpha + j);
            if (j == 0)
                al[(int)(alpha + j - 'a')] = 1;
            if (al[(int)(alpha + j - 'a')] == 0 && j > 0)
                al[(int)(alpha + j - 'a')] = 1;
            if (al[(int)(alpha + j - 'a')] == 1 && alpha + j == alpha + j - 1)
                al[(int)(alpha + j - 'a')] = 1;
            if (al[(int)(alpha + j - 'a')] == 1 && alpha + j != alpha + j - 1)
            {
                iteration--;
                free(alpha);
                break;
            }
        }
    }
    printf("%d", result);
    return 0;
}
