

// Lab_06.3.it.cpp 
// Варіант 22

#include <iostream>
#include <cmath>
using namespace std;

void FullArr(int t[], const int size, int a, int b);
void PrintArr(int t[], const int size);
int SumNegitiveItem(int t[], const int size);

void FullArr(int t[], const int size, int a, int b)
{
	for (int i = 0; i < size; i++)
	{
		t[i] = a + rand() % (b - a + 1);
	}
}


void PrintArr(int t[], const int size)
{
	cout << "Array - [";
	for (int i = 0; i < size; i++)
	{
		cout << t[i] << " ";
	}
	cout << "]";
}


int SumNegitiveItem(int t[], const int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (t[i] < 0)
		{
			sum += t[i];
		}
	}
	return sum;
}

int main() {
	int a = -5;
	int b = 5;
	const int SIZE = 20;

	int arr[SIZE];

	FullArr(arr, SIZE, a, b);

	PrintArr(arr, SIZE);

	int sumArr = SumNegitiveItem(arr, SIZE);
	cout << endl << "Sum negative item array = " << sumArr;
	
	return 0;
}


