
#include "stdafx.h"
using namespace std;
const int SIZE = 10;

void selection_sort(int list[], int n);
void print_list(int list[], int n);

int main()
{
	int grade[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };

	// 원래의 배열 출력
	cout << "원래의 배열" << endl;
	print_list(grade, SIZE);

	selection_sort(grade, SIZE);

	// 정렬된 배열 출력
	cout << "정렬된 배열" << endl;
	print_list(grade, SIZE);

	return 0;
}

void print_list(int list[], int n)
{
		cout << "array: ";
	for (int i = 0; i < n; i++) {
		//cout << list[i];
	cout << list[i];
	}
	cout << "\n";
}

void selection_sort(int list[], int n)
{
	int i, j, temp, least;

	for (i = 0; i < n - 1; i++)
	{
		least = i;

		for (j = i + 1; j < n; j++) { 	// 최소값 탐색
			if (list[j] < list[least])
				least = j;
		}

		// [i <-> least] swap
		temp = list[i];
		list[i] = list[least];
		list[least] = temp;

		//cout << "list: " << list[least] << endl;
		//print_list(grade, SIZE);
		print_list(list, n);
	}
}
