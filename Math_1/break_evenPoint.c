/*
매년 임대료,재산세,보험료,급여등 : A만원 고정 비용
한 대 노트북 생산비 = 재료비 + 인건비 = B만원(가변)
노트북 책정가 : C만원

A->1000
B->70
C->170

(A + B * result) < 170 * result
A + B * result - 170 * result < 0
A + (B - 170) * result < 0


*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int outmoney;
    int productive_money;
    int consumer_money;
    int nonsense = 0;
    int i = 0;
    scanf("%d %d %d", &outmoney, &productive_money, &consumer_money);
    while (outmoney + (productive_money - consumer_money) * i >= 0)
    {
        i++;
        if (i == 2100000000)
            break;
    }
    if (nonsense == 0)
        printf("-1");
    return 0;
}
