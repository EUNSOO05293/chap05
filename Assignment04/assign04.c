/*
 ���ϸ�: Assignment4-c
 ����: ������ �Է¹޾� �������� �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�
 �ۼ���: ������
 ��¥: 2025.04.26
 ���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void year()
{
	int year;
	printf("����? ");
	scanf("%d", &year);

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				printf("%d���� �����Դϴ�.", year);
			else
				printf("%d���� ��� �Դϴ�", year);
		}
		else
			printf("%d���� ���� �Դϴ�.", year);
	}
	else
		printf("%d���� ����Դϴ�", year);
	return;
}

int main()
{
	year();
	return 0;
}