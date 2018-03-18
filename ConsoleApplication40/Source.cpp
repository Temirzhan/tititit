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
		printf("Введите задания");
		scanf("%d", &N);
		switch (N)
		{
		case 1:
		{
			/*Даны два массива, упорядоченных по возрастанию: А[n] и B[m]. Сформируйте массив C[n+m], состоящий из элементов массивов А и В, упорядоченный по возрастанию (Массив С не должен сортироваться).
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
			/*Даны два массива : А[n] и B[m]. Необходимо создать третий массив, в котором нужно собрать общие элементы двух массивов.
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
			/*Даны два массива : А[n] и B[m]. Необходимо создать третий массив, в котором нужно собрать элементы массива A, которые не включаются в B.
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
			/*Даны два массива : А[n] и B[m]. Необходимо создать третий массив, в котором нужно собрать элементы массива B, которые не включаются в A.
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
			/*Даны два массива : А[n] и B[m]. Необходимо создать третий массив, в котором нужно собрать элементы массивов A и B, которые не являются общими для них.*/
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
			/**Напишите функцию, которая принимает одномерный массив целых чисел и заполняет его случайными числами.
*/
			int A[S];
			massiv(A, S);
			ShowMassiv(A, S);
		}
		break;
		case 7:
		{
			/**Напишите функцию, которая принимает число и возвращает истину, если число четное и ложь, если нечетное.*/
			int A;
			printf("Введите число");
			scanf("%d", &A);
			TrueAndFalse(&A);
		}
		break;
		case 8:
		{
			/***Написать функцию, которая возвращает истину, если переданное число простое, и ложь, если не простое. Простое число – это число, которое делиться ТОЛЬКО на 1 и на себя (2, 5, 7, 11 и т.д.).
*/int A;
		printf("Введите число");
		scanf("%d", &A);
		TrueAndFalse2(&A);
		}
		break;
		case 9:
		{
			/*****Написать функцию, которая принимает одномерный массив целых чисел и возвращает значения максимального числа в этом массиве.
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
			/***Напишите функцию, которая принимает три массива целых чисел. Выполнить поэлементное сложение элементов первых двух массивов, и результат занести в третий массив.
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
			/*Написать функцию, которая принимает целое шестизначное число и проверяет равна ли сумма первых трех цифр сумме последних трех цифр(счастливый билет). Функция возвращает истину, если число счастливое (суммы равны) и ложь, если не счастливое (суммы не равны).*/
			int A = 123312;
			Poslednya(&A);
			printf("%d", Poslednya(&A));
		}
		break;
		}
		printf("хотите продолжить задания\n");
		scanf("%c", &s);
	} while (s == 'y');
}