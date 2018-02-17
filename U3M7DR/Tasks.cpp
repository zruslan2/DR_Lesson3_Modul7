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
		cout << "������� ����� �������, 0 - ��� ������ "; cin >> nz;

		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*1.	���� ��� �������, ������������� �� ����������� : �[n] � B[m].����������� 
				������ C[n + m], ��������� �� ��������� �������� � � �, ������������� 
				�� �����������(������ � �� ������ �������������).*/
			head("1. ���� ��� �������, ������������� �� �����������: �[n] � B[m]. ����������� ������ C[n+m], ��������� �� ��������� �������� � � �, ������������� �� ����������� (������ � �� ������ �������������).");
			int A[5], B[5], C[10];
			creat(A, 5, 1, 50, positive);
			sort(A, 5, 1);
			yellow();
			cout << "������ A\n";
			white();
			print_arr(A, 5);
			creat(B, 5, 1, 50, positive);
			sort(B, 5, 1);
			yellow();
			cout << "������ B\n";
			white();
			print_arr(B, 5);
			newArr(A, 5, B, 5, C, 10);
			yellow();
			cout << "������ C\n";
			white();
			print_arr(C, 10);
		}
		else if (nz == 2)
		{
			/*2.	���� ��� ������� : �[n] � B[m].���������� ������� ������ ������, 
				� ������� ����� ������� ����� �������� ���� ��������.*/
			head("2. ���� ��� ������� : �[n] � B[m]. ���������� ������� ������ ������, � ������� ����� ������� ����� �������� ���� ��������.");
			int A[8], B[8], C[8],r;
			creat(A, 8, 1, 50, positive);			
			yellow();
			cout << "������ A\n";
			white();
			print_arr(A, 8);
			creat(B, 8, 1, 50, positive);
			yellow();
			cout << "������ B\n";
			white();
			print_arr(B, 8);
			r=common(A, 8, B, 8, C);
			if (r > 0)
			{
				yellow();
				cout << "������ � ������ ����������\n";
				white();
				print_arr(C, r);
			}			
		}
		else if (nz == 3)
		{
			/*3.	���� ��� ������� : �[n] � B[m].���������� ������� ������ ������, 
				� ������� ����� ������� �������� ������� A, ������� �� ���������� � B.*/
			head("3. ���� ��� ������� : �[n] � B[m]. ���������� ������� ������ ������, � ������� ����� ������� �������� ������� A, ������� �� ���������� � B.");
			int A[8], B[8], C[8], r;
			creat(A, 8, 1, 50, positive);
			yellow();
			cout << "������ A\n";
			white();
			print_arr(A, 8);
			creat(B, 8, 1, 50, positive);
			yellow();
			cout << "������ B\n";
			white();
			print_arr(B, 8);
			r = dissimilar(A, 8, B, 8, C);
			yellow();
			cout << "���������� �������� ������� A\n";
			white();
			print_arr(C, r);
		}
		else if (nz == 4)
		{
			/*4.	���� ��� ������� : �[n] � B[m].���������� ������� ������ ������, 
				� ������� ����� ������� �������� ������� B, ������� �� ���������� � A.*/
			head("4. ���� ��� ������� : �[n] � B[m]. ���������� ������� ������ ������, � ������� ����� ������� �������� ������� B, ������� �� ���������� � A.");
			int A[8], B[8], C[8], r;
			creat(A, 8, 1, 50, positive);
			yellow();
			cout << "������ A\n";
			white();
			print_arr(A, 8);
			creat(B, 8, 1, 50, positive);
			yellow();
			cout << "������ B\n";
			white();
			print_arr(B, 8);
			r = dissimilar(B, 8, A, 8, C);
			yellow();
			cout << "���������� �������� ������� B\n";
			white();
			print_arr(C, r);
		}
		else if (nz == 5)
		{
			/*5.	���� ��� ������� : �[n] � B[m].���������� ������� ������ ������, � ������� 
				����� ������� �������� �������� A � B, ������� �� �������� ������ ��� ���.*/
			head("5. ���� ��� ������� : �[n] � B[m]. ���������� ������� ������ ������, � ������� ����� ������� �������� �������� A � B, ������� �� �������� ������ ��� ���.");
			int A[5], B[5], C[10], r;
			creat(A, 5, 1, 50, positive);
			yellow();
			cout << "������ A\n";
			white();
			print_arr(A, 5);
			creat(B, 5, 1, 50, positive);
			yellow();
			cout << "������ B\n";
			white();
			print_arr(B, 5);
			r = dis(A, 5, B, 5, C);
			yellow();
			cout << "������ c ����������� ���������� ���� ��������\n";
			white();
			print_arr(C, r);
		}
		else
		{
			red();
			cout << "������ ������� �� ���������� \n";
			white();
		}
	}
}