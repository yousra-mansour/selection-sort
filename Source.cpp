#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void selectionSort(int arr[], int Size);
void swap(int *i, int *place);
int print(int arr[], int Size);


int main()
{
	srand((unsigned) time(0));
	int arr[30];
	for (int i = 0; i < 30; i++)
	{
		arr[i] = rand() % 50;
	}
	cout << "the array befor sorting  ";
	print(arr, 30);
	selectionSort(arr, 30);
	cout  << "the array befor sorting  ";
	print(arr, 30);


	return 0;
}

void selectionSort(int arr[], int Size)
{
int minimum ;
int place;
	for (int i = 0; i < Size - 1; i++)
	{
		minimum = arr[i];
			for (int j = i; j < Size; j++)
			{
				if (minimum > arr[j])
				{
					minimum = arr[j];
				    place = j;
				}
	     	}
			swap(&arr[i], &arr[place]);

		
	}


}
void swap(int* i, int* place)
{
	int tmp = *i;
	*i = *place;
	*place = tmp;
}
int print(int arr[], int Size)
{
	for (int i = 0; i < Size; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
	return 0;
}
