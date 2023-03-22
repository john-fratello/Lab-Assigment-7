#include <stdio.h>

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void printarray(int arr[], int n){
  for (int i = 0; i < n; i++){
    if (i == n - 1){
      printf("%d", arr[i]);
    }
    else
      printf("%d,", arr[i]);
  }
  printf("\n");
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++){
    int numswap = 0;
		for (j = 0; j < n - i - 1; j++){
      
			if (arr[j] > arr[j + 1]){
				swap(&arr[j], &arr[j + 1]);
        //printarray(arr, n);
        numswap ++;
      }
    }
    printf("Pass #%d: %d\n", i+1, numswap);
}

}


int main(void) {
  int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
  printf("Unsorted Array: ");
  printarray(arr, 9);
  bubbleSort(arr, 9 );
  printf("Sorted Array: ");
  printarray( arr, 9);
  
  
  return 0;

}
