#include <vector>
#include <time.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

int i, j;

enum type_number { positive, negative, all };

void head(char mas[])
{
	int len, third, s1_len, s2_len, s3_len, maks;
	len = strlen(mas);
	third = len / 3;
	s1_len = third;
	for (int i = s1_len; i < len; i++)
	{
		if (mas[s1_len] != ' ') s1_len++;
		else break;
	}
	s2_len = third;
	for (int i = s1_len + s2_len; i < len; i++)
	{
		if (mas[s1_len + s2_len] != ' ') s2_len++;
		else break;
	}
	s3_len = len - (s1_len + s2_len);
	vector<char>str1(s1_len);
	vector<char>str2(s2_len);
	vector<char>str3(s3_len);
	for (int i = 0; i < s1_len; i++)
	{
		str1[i] = mas[i];
	}
	for (int i = s1_len + 1; i < s1_len + s2_len; i++)
	{
		str2[i - (s1_len + 1)] = mas[i];
	}
	for (int i = s1_len + s2_len + 1; i < len; i++)
	{
		str3[i - (s1_len + s2_len + 1)] = mas[i];
	}
	maks = s1_len;
	if (s2_len > maks)maks = s2_len;
	if (s3_len > maks)maks = s3_len;
	system("cls");
	SetConsoleTextAttribute(hConsole, 11);
	setlocale(LC_ALL, ".866");
	cout << " Ъ";
	for (int i = 0; i <= maks + 1; i++)cout << "Д";
	cout << "ї\n";
	cout << " і "; setlocale(LC_ALL, ".1251");
	for (int i = 0; i<s1_len; i++) cout << str1[i];
	if (s1_len < maks)
	{
		for (int i = 0; i < maks - s1_len; i++)cout << " ";
	}
	setlocale(LC_ALL, ".866"); cout << " і\n";
	cout << " і "; setlocale(LC_ALL, ".1251");
	for (int i = 0; i<s2_len; i++) cout << str2[i];
	if (s2_len < maks)
	{
		for (int i = 0; i < maks - s2_len; i++)cout << " ";
	}
	setlocale(LC_ALL, ".866"); cout << " і\n";
	cout << " і "; setlocale(LC_ALL, ".1251");
	for (int i = 0; i<s3_len; i++) cout << str3[i];
	if (s3_len < maks)
	{
		for (int i = 0; i < maks - s3_len; i++)cout << " ";
	}
	setlocale(LC_ALL, ".866"); cout << " і\n";
	cout << " А";
	for (int i = 0; i <= maks + 1; i++)cout << "Д";
	cout << "Щ\n";
	SetConsoleTextAttribute(hConsole, 15);
	setlocale(LC_ALL, ".1251");
}

void yellow()
{
	SetConsoleTextAttribute(hConsole, 14);
}

void white()
{
	SetConsoleTextAttribute(hConsole, 15);
}

void red()
{
	SetConsoleTextAttribute(hConsole, 12);
}

void green()
{
	SetConsoleTextAttribute(hConsole, 11);
}

void sort_u(int*arr, int j)
{
	int prom;
	if (arr[j] > arr[j + 1])
	{
		prom = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = prom;
	}
}

void sort_d(int*arr, int j)
{
	int prom;
	if (arr[j] < arr[j + 1])
	{
		prom = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = prom;
	}
}

void sort(int*arr, int r, int n)
{
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < r - 1; j++)
		{
			if (n == 1)
				sort_u(arr, j);
			else
				sort_d(arr, j);
		}
	}
}

int numb(type_number tn, int start, int end)
{
	switch (tn)
	{
	case positive:
		return start + rand() % end;
		break;
	case negative:
		return start*(-1) + rand() % end;
		break;
	case all:
		return rand();
		break;
	}
}
double numb(type_number tn, double start, int end)
{
	switch (tn)
	{
	case positive:
		return (start + rand() % end) / (start + rand() % end);
		break;
	case negative:
		return (start*(-1) + rand() % end) / (start*(-1) + rand() % end);
		break;
	case all:
		return rand();
		break;
	}
}

void creat(int*arr, int r, int start, int end, type_number tn)
{
	for (i = 0; i < r; i++)
	{
		arr[i] = numb(tn, start, end);
	}
}

void print_arr(int*arr, int r)
{
	for (i = 0; i < r; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void newArr(int*arr, int r, int*arr1, int r1, int*arr2, int r2)
{
	int n = 0, m = 0;
	for (int i = 0; i < r2; i++)
	{
		if (arr[n] <= arr1[m]&&n!=r)
		{
			arr2[i] = arr[n];
			if(n<r)
			n++;
		}
		else if (n == r)
		{
			arr2[i] = arr1[m];
			if (m<r1)
			m++;
		}
		else if (arr1[m] < arr[n] && m != r1)
		{
			arr2[i] = arr1[m];
			if (m<r1)
				m++;
		}
		else if (m == r1)
		{
			arr2[i] = arr[n];
			if (n<r)
			n++;
		}
	}
}

int common(int*arr, int r, int*arr1, int r1, int*arr2)
{
	int b = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < r1; j++)
		{
			if (arr[i] == arr1[j])
			{
				arr2[b] = arr[i];
				b++;
			}
		}
	}
	red();
	if (b == 0) cout << "В массивах нет общих элементов\n";
	white();
	return b;
}

int dissimilar(int*arr, int r, int*arr1, int r1, int*arr2)
{
	int b = 0, d=0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < r1; j++)
		{
			if (arr[i] == arr1[j])
			{
				d++;
			}
		}
		if (d == 0)
		{
			arr2[b] = arr[i];
			b++;
		}
		d = 0;
	}
	return b;
}

int dis(int*arr, int r, int*arr1, int r1, int*arr2)
{
	int b = 0, d=0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < r1; j++)
		{
			if (arr[i] == arr1[j])
			{
				d++;
			}
		}
		if (d == 0)
		{
			arr2[b] = arr[i];
			b++;
		}
		d = 0;
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < r1; j++)
		{
			if (arr1[i] == arr[j])
			{
				d++;
			}
		}
		if (d == 0)
		{
			arr2[b] = arr1[i];
			b++;
		}
		d = 0;
	}
	return b;
}