#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <math.h>
#include "Header.h"
using namespace std;

int main()
{
	// Рекурсия!!!


	/*setlocale(LC_ALL, "Rus");
	srand(time(0));
	int sum = 0;
	cout << "Начало рекурсии - " << endl;
	int result = rFunc(5, 3, 1);
	cout << "\n" << result << endl;
	system("pause");
	result = rFuncSum(5, 3, 1, &sum);
	cout << "\n" << result << endl;
	system("pause");
	int const count = 2;
	result = MyPow(3, 2, &count);
	cout << "\n" << result << endl;*/


	int m[10][4];
	ArrFilling(m, 10, 4);
	ArrPrint(m, 10, 4);


	return 0;
	int arr[4][2] = { {2,4},{ 22,34 },{ 24,56 },{ 8,33 } };
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			
			printf("%d\t%p", arr[i][j], arr[i][j]);
			/*cout << arr[i][j] << "\t";*/
		} cout << endl;
		// arr - arr[0][0]
		// [int][int]

	}


	Arr(arr);

	Arr(&arr[2]);
	return 0;

	printf("arr %p == &arr[0] = %p\n", arr, &arr[0]);

	printf("arr %p == &arr[0][0] = %p, arr[1][0] = %d \n", arr, &arr[0][0], arr[1][0]);

	/*int **point = NULL;
	point = &();*/

	/*arr + 1;*/ // arr[0][1]

	//arr[1][0] - arr + 2;
	printf("\n arr[1][0] = %p // arr + 3 = %p\n", arr[1][0], arr + 3);

	/*pointer = &mas[0][0]  1я строка, 1й элемент
	pointer + 1 = &mas[0][1] - 1я строка, 2й элемент
	pointer + 2 = &mas[1][0] - 2 строка, 1й элемент
	pointer + 3 = &mas[1][1]*/

	printf("arr[0] = %d, *(arr) = %d,\n\n", arr[0], *(arr));
	printf("arr[0][0] = %d, **arr = %d\n", arr[0][0], **arr);

	Arr(&arr[2]);

	/*int m[1000][1000][1000] = { 0 };
	for (int i = 0; i < 1000; i++)
	{
		for (int j = 0; j < 1000; j++)
		{
			cout << endl;
		}
	}*/

}