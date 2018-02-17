#include <stdio.h>
#include <iostream>
#include <time.h>
#include "MyFunc.h"

using namespace std;
unsigned short int nz;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));

	int i, j;
	while (true)
	{
		cout << "Введите номер задания, 0 - для выхода "; cin >> nz;

		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*1.	Даны два массива, упорядоченных по возрастанию : А[n] и B[m].Сформируйте 
				массив C[n + m], состоящий из элементов массивов А и В, упорядоченный 
				по возрастанию(Массив С не должен сортироваться).*/
			head("1. Даны два массива, упорядоченных по возрастанию: А[n] и B[m]. Сформируйте массив C[n+m], состоящий из элементов массивов А и В, упорядоченный по возрастанию (Массив С не должен сортироваться).");
			int A[5], B[5], C[10];
			creat(A, 5, 1, 50, positive);
			sort(A, 5, 1);
			yellow();
			cout << "Массив A\n";
			white();
			print_arr(A, 5);
			creat(B, 5, 1, 50, positive);
			sort(B, 5, 1);
			yellow();
			cout << "Массив B\n";
			white();
			print_arr(B, 5);
			newArr(A, 5, B, 5, C, 10);
			yellow();
			cout << "Массив C\n";
			white();
			print_arr(C, 10);
		}
		else if (nz == 2)
		{
			/*2.	Даны два массива : А[n] и B[m].Необходимо создать третий массив, 
				в котором нужно собрать общие элементы двух массивов.*/
			head("2. Даны два массива : А[n] и B[m]. Необходимо создать третий массив, в котором нужно собрать общие элементы двух массивов.");
			int A[8], B[8], C[8],r;
			creat(A, 8, 1, 50, positive);			
			yellow();
			cout << "Массив A\n";
			white();
			print_arr(A, 8);
			creat(B, 8, 1, 50, positive);
			yellow();
			cout << "Массив B\n";
			white();
			print_arr(B, 8);
			r=common(A, 8, B, 8, C);
			if (r > 0)
			{
				yellow();
				cout << "Массив с общими элементами\n";
				white();
				print_arr(C, r);
			}			
		}
		else if (nz == 3)
		{
			/*3.	Даны два массива : А[n] и B[m].Необходимо создать третий массив, 
				в котором нужно собрать элементы массива A, которые не включаются в B.*/
			head("3. Даны два массива : А[n] и B[m]. Необходимо создать третий массив, в котором нужно собрать элементы массива A, которые не включаются в B.");
			int A[8], B[8], C[8], r;
			creat(A, 8, 1, 50, positive);
			yellow();
			cout << "Массив A\n";
			white();
			print_arr(A, 8);
			creat(B, 8, 1, 50, positive);
			yellow();
			cout << "Массив B\n";
			white();
			print_arr(B, 8);
			r = dissimilar(A, 8, B, 8, C);
			yellow();
			cout << "Уникальные элементы массива A\n";
			white();
			print_arr(C, r);
		}
		else if (nz == 4)
		{
			/*4.	Даны два массива : А[n] и B[m].Необходимо создать третий массив, 
				в котором нужно собрать элементы массива B, которые не включаются в A.*/
			head("4. Даны два массива : А[n] и B[m]. Необходимо создать третий массив, в котором нужно собрать элементы массива B, которые не включаются в A.");
			int A[8], B[8], C[8], r;
			creat(A, 8, 1, 50, positive);
			yellow();
			cout << "Массив A\n";
			white();
			print_arr(A, 8);
			creat(B, 8, 1, 50, positive);
			yellow();
			cout << "Массив B\n";
			white();
			print_arr(B, 8);
			r = dissimilar(B, 8, A, 8, C);
			yellow();
			cout << "Уникальные элементы массива B\n";
			white();
			print_arr(C, r);
		}
		else if (nz == 5)
		{
			/*5.	Даны два массива : А[n] и B[m].Необходимо создать третий массив, в котором 
				нужно собрать элементы массивов A и B, которые не являются общими для них.*/
			head("5. Даны два массива : А[n] и B[m]. Необходимо создать третий массив, в котором нужно собрать элементы массивов A и B, которые не являются общими для них.");
			int A[5], B[5], C[10], r;
			creat(A, 5, 1, 50, positive);
			yellow();
			cout << "Массив A\n";
			white();
			print_arr(A, 5);
			creat(B, 5, 1, 50, positive);
			yellow();
			cout << "Массив B\n";
			white();
			print_arr(B, 5);
			r = dis(A, 5, B, 5, C);
			yellow();
			cout << "Массив c уникальными элементами двух массивов\n";
			white();
			print_arr(C, r);
		}
		else
		{
			red();
			cout << "Такого задания не существует \n";
			white();
		}
	}
}