#include "header.h"
char* deleteCharComb(char* str, char c, char r)
{
	for (int i = 0; i <= 200; i++)
	{
		if (((str[i] == r) || (str[i] == c)) && ((str[i + 1] == r) || (str[i + 1] == c)))
		{
			for (int j = i; j <= 198; j++)
			{
				str[j] = str[j + 2];
			}
			i--; //��� ��� �� ���������� �������� ��� ����������� �������� ������� �� 2 ������� �����, ����� ��������� �������� ����� ������� ��� ���.
		}
	}
	return str;
}