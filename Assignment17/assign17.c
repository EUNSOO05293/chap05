/*
 ���ϸ�: Assignment17-c
 ����: ���� �ð��� ������ �Է¹޾Ƽ� ���� ����� ����ؼ� ����ϴ� ���α׷��� �ۼ�
 �ۼ���: ������
 ��¥: 2025.04.26
 ���� : v0.1
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Park()
{
    int minute, price_type, price;
    printf("���� �ð�(��)? ");
    scanf("%d", &minute);

    price_type = minute / 10;

    if (minute % 10 != 0) price_type++;

    if (price_type >= 3)
    {
        price = 2000;
        price_type -= 3;
    }

    if (price_type < 24)
    {
        price += 1000 * price_type;
    }
    else
    {
        price = 25000;
    }
    printf("�������: %d��", price);
	return;
}

int main()
{
    Park();
    return 0;
}