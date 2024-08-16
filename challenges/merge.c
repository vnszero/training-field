// C program for Merge Sort
#include <stdio.h>
#include <stdlib.h>

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int left, int middle, int right)
{
	int i, j, k;
	int size_left = middle - left + 1;
	int size_right = right - middle;

	// Create temporary arrays
	int left_array[size_left], right_array[size_right];

	// Copy data to temporary arrays left_array[] and right_array[]
	for (i = 0; i < size_left; i++)
		left_array[i] = arr[left + i];
	for (j = 0; j < size_right; j++)
		right_array[j] = arr[middle + 1 + j];

	// Merge the temporary arrays back into arr[l..r]
	i = 0;
	j = 0;
	k = left;
	while (i < size_left && j < size_right) {
		if (left_array[i] <= right_array[j]) {
			arr[k] = left_array[i];
			i++;
		}
		else {
			arr[k] = right_array[j];
			j++;
		}
		k++;
	}

	// Copy the remaining elements of left_array[],
	// if there are any
	while (i < size_left) {
		arr[k] = left_array[i];
		i++;
		k++;
	}

	// Copy the remaining elements of right_array[],
	// if there are any
	while (j < size_right) {
		arr[k] = right_array[j];
		j++;
		k++;
	}
}

// left is for left index and right is right index of the
// sub-array of arr to be sorted
void mergeSort(int arr[], int left, int right)
{
	if (left < right) {
		int middle = left + (right - left) / 2;

		// Sort first and second halves
		mergeSort(arr, left, middle);
		mergeSort(arr, middle + 1, right);

		merge(arr, left, middle, right);
	}
}

// Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver code
int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	printf("Given array is \n");
	printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

	printf("\nSorted array is \n");
	printArray(arr, arr_size);
	return 0;
}
