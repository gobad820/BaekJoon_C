/*
TODO:
1. 몇개의 단어를 입력 받는가
    _1 scanf를 이용하여 for문을 몇번 반복할지 결정
2. 각가 입력된 단어는 그룹단어인가?
    _2 그룹 단어 확인 알고리즘
        단어를 문자열로 입력 받는다
        단어를 문자별로 각가 분석
            알파벳 개수인 26개의 배열을 생성
            각 배열은 모두 기본값 0을 가지고 있음
            문자가 나오면 해당되는 알파벳 배열의 값을 1로 변경(처음의 경우)
            이미 나왔던 문자이나 그 전의 문자와 동일한 경우는 continue
            이미 나왔던 문자이나 그 전의 문자와 동일하지 않은 경우는 그 즉시 for문 break하고 다음 단어 검색으로 넘어감
        
3. 그룹 단어는 몇개인가?
    _3 printf
    
FIXME:
1.반례는 무엇인가?
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int iteration;
    scanf("%d", &iteration);
    int result = iteration;
    for (int i = 0; i < iteration; i++)
    {
        char word[101];
        int alpha[26] = {0};
        scanf("%s", word);
        int length = strlen(word);
        for (int j = 0; j < length; j++)
        {
            if (alpha[word[j] - 'a'] == 0)
                alpha[word[j] - 'a'] = 1;
            else if (alpha[word[j] - 'a'] == 1 && word[j] != word[j - 1])
            {
                result--;
                break;
            }
        }
    }
    printf("%d", result);
    return 0;
}
