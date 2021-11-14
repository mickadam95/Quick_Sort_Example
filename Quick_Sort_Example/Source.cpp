#include <iostream>

using namespace std;


void swap(int*, int*);
void quickSort(int[], int, int);
int partition(int[], int, int);
bool randomSearch(int[]);



int main() {

	int unSortedArray[1000]; //declare an array that has 1000 blank elements. From index 0 to index 999

	for (int i = 0; i < 1000; i++) { //a for loop that fills every element from 0 to 999

		unSortedArray[i] = rand() % 2000 + 1; //place a random number between 1 and 100 in the array
		/*the rand function is a seeded random number. This is not a true random number.*/
	}

	quickSort(unSortedArray, 0, 999);

	if (randomSearch(unSortedArray) == true)
		cout << "The data element was located in the array \n";
	else
		cout<< "The data element was not found in the array\n"


	return 0;
}

bool randomSearch(arry[]) {

	int target = rand() % 2000 + 1; //create the random target value we will search for.
	int first = 0; //the first index of the array
	int last = arry.size() - 1; //the last index of the array
	int middle = ((arry.size() - 1) / 2) //the middle index of the array 

	while (first <= last) { //while the first index is less than or equal to the last
		if (arry[middle] < target) {
			first = middle + 1;
		}
		else if (arry[middle] == target) {
			return true;
		}
		else {
			last = middle - 1;
		}
	}
	if (first > last)
		return false;

}


//the swap function swaps two elements in an array
void swap(int* a, int* b) {

	int t = *a;

	*a = *b;
	*b = t;
}



void quickSort(int arr[], int start, int end) {

	if (start < end) {

		int pi = partition(arr, start, end);

		quickSort(arr, start, pi - 1);
		quickSort(arr, pi + 1, end);

	}

}

int partition(int arr[], int low, int high)
{
	int pivot = arr[high]; // pivot  
	int i = (low - 1); // Index of smaller element  

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller than the pivot  
		if (arr[j] < pivot)
		{
			i++; // increment index of smaller element  
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}
