/*
 파일명: Assignment3-c
 내용: 거스름돈의 금액을 입력받아 오만원, 만원, 천원, 백원, 십원짜리가 각각 몇개 필요한지 구해서 출력하시오
 작성자: 이은수
 날짜: 2025.04.26
 버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int change()
{
    int money;
    printf("거스름돈 ? ");
    scanf("%d", &money);
    money -= money % 10;
    printf("거스름돈(10원미만 절사): %d\n", money);
    return money;
}

void changrdown(int money)
{
    if ((money / 50000) != 0)
    {
        printf("50000원 %d장\n", money / 50000);
        money %= 50000;
    }

    if ((money / 10000) != 0)
    {
        printf("10000원 %d장\n", money / 10000);
        money %= 10000;
    }

    if ((money / 5000) != 0)
    {
        printf("5000원 %d장\n", money / 5000);
        money %= 5000;
    }

    if ((money / 1000) != 0)
    {
        printf("1000원 %d장\n", money / 1000);
        money %= 1000;
    }

    if ((money / 100) != 0)
    {
        printf("100원 %d개\n", money / 100);
        money %= 100;
    }

    if ((money / 10) != 0)
    {
        printf("10원 %d개\n", money / 10);
        money %= 10;
    }
}

int main()
{
    int money = change();
    changrdown(money);
    return 0;
}
