/*
 ���ϸ�: Assignment-5
 ����: �µ��� �Է¹޾� ���� �µ��� ȭ�� �µ���, ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� ���α׷� �ۼ�
 �ۼ���: ������
 ��¥: 2025.04.26
 ���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Temp()
{
	double temp;
	char ch;
	printf("�µ�? ");
	scanf("%lf %c", &temp, &ch);

	if (ch == 'C')
	{
		printf("%.2lf C ==> %.2lf F", temp, (temp * (9.0 / 5.0)) + 32);
	}

	if (ch == 'F')
	{
		printf("%.2lf F ==> %.2lf C", temp, (temp - 32.0) * (5.0 / 9.0));
	}
}

int main()
{
	Temp();
	return 0;
}