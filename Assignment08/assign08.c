/*
 ���ϸ�: Assignment8-c
 ����: ��Ʈ ������ �����ϴ� ���⸦ ���α׷� �Ͻÿ�.
 �ۼ���: ������
 ��¥: 2025.04.26
 ���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void BIT()
{
	unsigned int x, y, result = 0;
	char ch;
	printf("��Ʈ �����? ");
	scanf("%x %c %x", &x, &ch, &y);

	if (ch == '&')
	{
		result = x & y;
	}
	else if (ch == '^')
	{
		result = x ^ y;
	}
	else if (ch == '|')
		result = x | y;

	printf("%X %c %X = %8x", x, ch, y, result);
}

int main()
{

	BIT();
	return 0;
}