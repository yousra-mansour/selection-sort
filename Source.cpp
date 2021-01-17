#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
#define MAX_LEN 50 

using namespace std;

void selectionSort(int arr[], int Size);
void swap(int *i, int *place);
int print(int arr[], int Size);
//void selectionSortTEXT(int arr[], int Size);
int printTEXT(char arr[][MAX_LEN]);
void selectionSortTEXT(char arr[][50], int n);



int main()
{
	/*srand((unsigned) time(0));
	int arr[30];
	for (int i = 0; i < 30; i++)
	{
		arr[i] = rand() % 30;
	}
	cout << "the array befor sorting  ";
	print(arr, 30);
	selectionSort(arr, 30);
	cout  << "the array befor sorting  ";
	print(arr, 30);*/

	char text[][MAX_LEN] = { "paper", "true", "soap" ,"floppy" ,"flower" };
	printTEXT(text);
	 int n = sizeof(text) / sizeof(text[0]);
	 cout << n;
	selectionSortTEXT(text, n);
    printTEXT(text);
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
int printTEXT(char arr[][MAX_LEN] )
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << arr[i][j];
		}
		cout << "  ";
	}
	cout << endl;
	return 0;
}

void selectionSortTEXT(char arr[][MAX_LEN], int n) {
	int i, j, mIndex;
	// Move boundary of unsorted subarray one by one
	char minStr[MAX_LEN];
	for (i = 0; i < n - 1; i++) {
		// Determine minimum element in unsorted array
		int mIndex = i;
		strcpy(minStr, arr[i]);
		for (j = i + 1; j < n; j++) {
			// check whether the min is greater than arr[j]
			if (strcmp(minStr, arr[j]) > 0) {
				// Make arr[j] as minStr and update min_idx
				strcpy(minStr, arr[j]);
				mIndex = j;
			}
		}
		// Swap the minimum with the first element
		if (mIndex != i) {
			char temp[MAX_LEN];
			strcpy(temp, arr[i]); //swap item[pos] and item[i]
			strcpy(arr[i], arr[mIndex]);
			strcpy(arr[mIndex], temp);
		}
	}
}
