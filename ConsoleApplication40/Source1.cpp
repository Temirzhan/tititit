#include<stdio.h>
#include<iostream>
#include<math.h>
#include<locale.h>
#include"Header.h"

void newMassiv(int *A, int *B,int *C, int s)
{
	for (int i = 0; i < s; i++)
	{
		*(C + i) = *(A + i);
		*(C + s + i) = *(B + i);
	}
}
int new2Massiv(int *A, int *B, int *C, int s)
{
	int flag = 0;
	int chet=0;
	int A1 = 0;
	for (int i = 0; i < s; i++)
	{
		 flag = 0;
		for (int j = 0; j < s; j++)
		{
			if (*(A + i) == *(B + j))
			{
			
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			*(C + A1)=*(A+i);
			chet++;
			A1++;
		}
	}
	return chet;
}
int new3Massiv(int *A, int *B, int *C, int s)
{
	int flag = 0;
	int chet = 0;
	int A1 = 0;
	for (int i = 0; i < s; i++)
	{
		flag = 0;
		for (int j = 0; j < s; j++)
		{

			if (*(A + i) == *(B + j))
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			*(C + A1) = *(A + i);
			chet++;
			A1++;
		}
	}
	return chet;
}
int new4Massiv(int *A, int *B, int *C, int s)
{
	int flag = 0;
	int chet = 0;
	int A1 = 0;
	for (int i = 0; i < s; i++)
	{
		flag = 0;
		for (int j = 0; j < s; j++)
		{

			if (*(B + i) == *(A + j))
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			*(C + A1) = *(B + i);
			chet++;
			A1++;
		}
	}
	return chet;
}
int new5Massiv(int *A, int *B, int *C, int s)
{
	int flag = 0;
	int chet = 0;
	int A1 = 0;
	for (int i = 0; i < s; i++)
	{
		flag = 0;
		for (int j = 0; j < s; j++)
		{

			if (*(B + i) != *(A + j))
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			*(C + A1) = *(B + i);
			chet++;
			A1++;
			*(C + A1) = *(A + i);
			A1++;
		}
	
	}
	return chet;
}
void massiv(int *A, int s)
{
	for (int i = 0; i < s; i++)
	{
		*(A + i) = 1 + rand() % 100;
	}
}
void ShowMassiv(int *A,int s)
{
	for (int i = 0; i < s; i++)
	{
		printf("A[%d]=%d\n", i, *(A + i));
	}
	printf("-------------------------------\n");
}
void TrueAndFalse(int *A)
{
	if ((*A % 2) == 0)
		printf("истина\n");
	else
		printf("не истина\n");
}
void TrueAndFalse2(int *A)
{
	int flag = 0;
	for (int i = 2; i < *A; i++)
	{
		if ((*A % i) == 0)
		{
			flag = 1;
				break;
		}
	}
	if (flag)
		printf("не истина\n");
	else
		printf("истина\n");
}

int Max(int *A, int s)
{
	int max = *A;
	for (int i = 0; i < s; i++)
	{
		if (max < *(A + i))
		max = *(A + i);
	}
	return max;
}
void new7Massiv(int *A, int *B, int *C, int s)
{
	for (int i = 0; i < s; i++)
	{
		*(C + i) = *(A + i) + *(B + i);
	}

}


int Poslednya(int *A)
{
	if ((*A / 100000) + ((*A / 10000) % 10) + ((*A / 1000) % 10) == ((*A / 100) % 10) + ((*A / 10) % 10) + (*A % 10))
		return 1;

	return 0;
}