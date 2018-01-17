#include <iostream>

#include <math.h>

#include <stdio.h>

#include <locale.h>

#include <Windows.h>

#include <conio.h>

#include <time.h>

#define N 5
#define M 6

using namespace std;

void main()

{
	system("cls");

	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int nz;

	cout << "Vvedite nomer zadaniya : ";

	cin >> nz;

	cout << endl;

	switch (nz)

	{

	case 1:
	{
		/* Дан квадратный массив из n элементов. Найти произведение элементов первой строки */
		int mas[5][5] = { {0}, {0} }, sum = 0;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				mas[i][j] = 1 + rand() % 9;	
				if (i == 0)
					sum += mas[i][j];
			}
		}
		
		for (int i = 0; i < 5; i++) cout << mas[0][i] << " " << endl;
		cout << endl;

		cout <<sum << " " << endl;

	}
	break;

	case 2:
	{
		/* Дана целочисленная квадратная матрица. Написать программу упорядочения ее строк по возрастанию сумм их элементов */
		int mas[3][4] = { { 0 },{ 0 } };
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				mas[i][j] = 1 + rand() % 9;		
				cout << mas[i][j] << "\t";
				mas[i][3] += mas[i][j];
			}
			cout << mas[i][3] << endl;
			cout << endl;
		}
		
		if (mas[1][3] > mas[2][3] && mas[1][3] > mas[0][3])
		{
			for (int i = 0; i < 3; i++)
			{
				cout << mas[0][i] << "\t";
				cout << endl;
				if (mas[2][3]>mas[0][3])
				{
					cout << mas[2][i] << "\t";
					cout << endl;
					cout << mas[0][i] << "\t";
					cout << endl;
				}
				else
				{
					cout << mas[0][i] << "\t";
					cout << endl;
					cout << mas[2][i] << "\t";
					cout << endl;
				}
			}
		}
		if (mas[2][3] > mas[1][3] && mas[2][3] > mas[0][3])
		{
			for (int i = 0; i < 3; i++)
			{
				cout << mas[2][i] << "\t";
				cout << endl;
				if (mas[2][3]>mas[1][3])
				{
					cout << mas[0][i] << "\t";
					cout << endl;
					cout << mas[1][i] << "\t";
					cout << endl;
				}
				else
				{
					cout << mas[1][i] << "\t";
					cout << endl;
					cout << mas[0][i] << "\t";
					cout << endl;
				}
			}
		}
		


	}
	break;

	case 3:
	{
		/* Дана целочисленная матрица размера 5×10. Найти максимальное значение среди сумм элементов всех ее строк */
		int mas[5][10] = { {0},{0} },k,max;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				mas[i][j] = 1 + rand() % 9;
				cout << mas[i][j]<<"\t";
			}
			cout << endl;
		}
		cout << endl;
		cout << "Max summa stolbca = " ;
		
		for (int i = 0; i < 10; i++)
		{
			k = 0;
			for (int j = 0; j < 5; j++)
			{
				k = mas[i][j] + k;
			}
			if (i == 1)
				max = k;
			else
				if (k > max)
					max = k;
			
		
		}
		cout << max<<endl;
		cout << endl;
	}
	break;

	case 4:
	{
		/* В произвольной матрице - отсортировать по убыванию элементы последовательности, расположенные после второго отрицательного числа. */
		int a[N][M], i, j, k, id, max;
		srand(time(NULL));
		for (i = 0; i<N; i++) {
			for (j = 0; j<M; j++) {
				a[i][j] = rand() % 50 - 25;
				printf("%4d", a[i][j]);
			}
			printf("\n");
		}
		printf("\n");

		k = M - 1;
		while (k > 0) {
			id = 0;
			for (j = 1; j <= k; j++)
				if (a[0][j] > a[0][id])
					id = j;
			for (i = 0; i<N; i++) {
				max = a[i][id];
				a[i][id] = a[i][k];
				a[i][k] = max;
			}
			k -= 1;
		}

		for (i = 0; i<N; i++) {
			for (j = 0; j<M; j++) {
				printf("%4d", a[i][j]);
			}
			printf("\n");
		}
	}
	break;

	case 6:
	{
		/* Элементы матрицы A сделать с помощью генератора случайных чисел. Сделать новую матрицу B , в которой удалить с матрицы А ряд,  в котором минимальный элемент среди элементов главной диагонали*/
		int mas[5][10] = { { 0 },{ 0 } };
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				mas[i][j] = 1 + rand() % 9;
				cout << mas[i][j] << "\t ";
			}
			cout << endl;
		}
		cout << "--------------------------------------------------------------------------"<<endl;


	}
	break;

	case 7:
	{
		/* Составить программу, которая заполняет квадратную матрицу порядка n натуральными числами 1, 2, 3, .. ., n2,записывая их в нее "по спирали" против часовой стрелки.*/
	}
	break;

	}
}