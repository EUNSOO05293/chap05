/*
 ���ϸ�: Assignment1-c
 ����: ���� ��ǥ(x,y)�� �Է¹޾� ��ũ�� ���� ���� ���� ���� ������ �˻��ϴ� ���α׷� �ۼ�
 �ۼ���: ������
 ��¥: 2025.04.26
 ���� : v0.1
*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void Screen()
{
	int left, right, top, bottom, x, y;

	printf("���� ������ �»���� (left, top)? ");
	scanf("%d %d", &left, &top);

	printf("���� ������ ���ϴ��� (right, bottom)? ");
	scanf("%d %d", &right, &bottom);

	printf("���� ��ǥ (x, y)? ");
	scanf("%d %d", &x, &y);

	if (left < x < right && right < y < bottom)
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.");
	else
		printf("���簢�� ����� ���� ���� ���� ���� �ƴմϴ�.");

}

int main()
{
	Screen();
	return 0;
}