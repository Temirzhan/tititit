#include<stdio.h>
#include<iostream>
#include<math.h>
#include<locale.h>
#include"Header.h"
#include<time.h>

using namespace std;
char s;
#define S 4
void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "RUS");
	do
	{
		int N;
		printf("������� �������");
		scanf("%d", &N);
		switch (N)
		{
		case 1:
		{
			/*���� ��� �������, ������������� �� �����������: �[n] � B[m]. ����������� ������ C[n+m], ��������� �� ��������� �������� � � �, ������������� �� ����������� (������ � �� ������ �������������).
*/      int A[S] = { 4,2,1,5 };
		int B[S] = { 3,4,6,8 };
		int C[S+S];
		ShowMassiv(A, S);
		ShowMassiv(B, S);
		newMassiv(A, B, C, S);
		ShowMassiv(C, S+S);
		}
			break;
		case 2:
		{
			/*���� ��� ������� : �[n] � B[m]. ���������� ������� ������ ������, � ������� ����� ������� ����� �������� ���� ��������.
*/   int A[S] = { 4,2,1,5 };
		int chet;
		int B[S] = { 3,4,6,8 };
		int C[S + S];
		ShowMassiv(A, S);
		ShowMassiv(B, S);
		chet=new2Massiv(A, B, C, S);
		ShowMassiv(C, chet);
		}
		break;
		case 3:
		{
			/*���� ��� ������� : �[n] � B[m]. ���������� ������� ������ ������, � ������� ����� ������� �������� ������� A, ������� �� ���������� � B.
*/int A[S] = { 4,2,1,5 };
		int chet;
		int B[S] = { 3,4,6,8 };
		int C[S + S];
		ShowMassiv(A, S);
		ShowMassiv(B, S);
		chet = new3Massiv(A, B, C, S);
		ShowMassiv(C, chet);
		}
		break;
		case 4:
		{
			/*���� ��� ������� : �[n] � B[m]. ���������� ������� ������ ������, � ������� ����� ������� �������� ������� B, ������� �� ���������� � A.
*/int A[S] = { 4,2,1,5 };
		int chet;
		int B[S] = { 3,4,6,8 };
		int C[S + S];
		ShowMassiv(A, S);
		ShowMassiv(B, S);
		chet = new4Massiv(A, B, C, S);
		ShowMassiv(C, chet);
		}
		break;
		case 5:
		{
			/*���� ��� ������� : �[n] � B[m]. ���������� ������� ������ ������, � ������� ����� ������� �������� �������� A � B, ������� �� �������� ������ ��� ���.*/
			int A[S] = { 4,2,1,5 };
			int chet;
			int B[S] = { 3,4,6,8 };
			int C[S + S];
			ShowMassiv(A, S);
			ShowMassiv(B, S);
			chet = new5Massiv(A, B, C, S+S);
			ShowMassiv(C, chet);
		}
		break;
		case 6:
		{
			/**�������� �������, ������� ��������� ���������� ������ ����� ����� � ��������� ��� ���������� �������.
*/
			int A[S];
			massiv(A, S);
			ShowMassiv(A, S);
		}
		break;
		case 7:
		{
			/**�������� �������, ������� ��������� ����� � ���������� ������, ���� ����� ������ � ����, ���� ��������.*/
			int A;
			printf("������� �����");
			scanf("%d", &A);
			TrueAndFalse(&A);
		}
		break;
		case 8:
		{
			/***�������� �������, ������� ���������� ������, ���� ���������� ����� �������, � ����, ���� �� �������. ������� ����� � ��� �����, ������� �������� ������ �� 1 � �� ���� (2, 5, 7, 11 � �.�.).
*/int A;
		printf("������� �����");
		scanf("%d", &A);
		TrueAndFalse2(&A);
		}
		break;
		case 9:
		{
			/*****�������� �������, ������� ��������� ���������� ������ ����� ����� � ���������� �������� ������������� ����� � ���� �������.
*/
			int A[S];
			massiv(A, S);
			ShowMassiv(A, S);
			int max=Max(A, S);
			printf("Max %d\n", max);
		}
		break;
		case 10:
		{
			/***�������� �������, ������� ��������� ��� ������� ����� �����. ��������� ������������ �������� ��������� ������ ���� ��������, � ��������� ������� � ������ ������.
*/int A[S] = { 4,2,1,5 };
		int chet;
		int B[S] = { 3,4,6,8 };
		int C[S + S];
		ShowMassiv(A, S);
		ShowMassiv(B, S);
		new7Massiv(A, B, C, S);
		ShowMassiv(C, S);
		}
		break;
		case 11:
		{
			/*�������� �������, ������� ��������� ����� ������������ ����� � ��������� ����� �� ����� ������ ���� ���� ����� ��������� ���� ����(���������� �����). ������� ���������� ������, ���� ����� ���������� (����� �����) � ����, ���� �� ���������� (����� �� �����).*/
			int A = 123312;
			Poslednya(&A);
			printf("%d", Poslednya(&A));
		}
		break;
		}
		printf("������ ���������� �������\n");
		scanf("%c", &s);
	} while (s == 'y');
}