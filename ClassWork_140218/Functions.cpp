#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <math.h>
#include "Header.h"
using namespace std;

int rFunc(int count,  int z, int fn)
{
	if (count <= 1)
		return fn;

	fn += z; // fn = fn + 3
	count--;
	cout << count <<". fn = " << fn << endl;
	fn = rFunc(count, z, fn);

	return fn;
}


// ����� n - ������ ������ ����������
int rFuncSum(int count, int z, int fn, int *sum)
{	
	*sum += fn;
	if (count <= 0)
		return *sum;
	fn += z;
	count--;
	cout << count << ". fn = " << fn << "; sum = " << *sum << endl;
	*sum = rFuncSum(count, z, fn, sum);
	return *sum;
}

int MyPow(int n, int numb, int const *count)
{	
	
	if (n <= 0)
		return numb;
	cout << numb << " � ������� " << *count << " = ";
	numb *= *count;
	cout << numb << endl;
	n--;

	numb = MyPow(n, numb, count);
	return numb;
}

void Arr(int(*p)[2]) // ��������� �� ������ �� 2-� �������� ���� int, �.� 2 ������� � ������ ������
{
	//int * ref;

	//ref = &p[0][0];
	//int f[2];
	//int * pax[2]; // ������ ��  2� ���������
	//pax[0] = &p[1][2];

	int(*pz)[2];
	pz = p;


	printf("pz %p, pz + 1 = %p \n", pz, pz + 3);
	printf("pz %d, pz + 1 = %d \n\n\n", **pz, *(*pz + 3));

	printf(" &(*pz) = % p \n", &(*pz));
}

void ArrFilling(int(*p)[4], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			//p[i][j] = 1 + rand() % 10;

			*(*p + j) = 1 + rand() % 10;
		}
		p++;
	}
	
}
void ArrPrint(int(*p)[4], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			//p[i][j] = 1 + rand() % 10;

			*(*p + j) = 1 + rand() % 10;
			printf("%d\t", *(*p + j));
		} printf("\n");
	}
}