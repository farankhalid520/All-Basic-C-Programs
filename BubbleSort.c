#include <stdio.h>>
int main()
{
	int arr[100];
	int N;
	printf("Enter no. of elements you want to insert within the range of 100 : ");
    scanf("%d", &N);
	input(arr, N);
	bubblesort(arr, N);
	printArray(arr, N);
	
	return 0;
}

int input(int array[100], int N)
{
	int i;

    if(N > 100)
    {
    	printf("Error: Array Range Exceeded");
	}
	else
	{
	    printf("Enter numbers: \n");
		for(i=0; i<N; i++)
		{
			scanf("%d", &array[i]);
		}
	}
	
	return array;
}

int bubblesort(int array[], int N )
{
    int c,d,swap;
    
    for (c = 0 ; c < N - 1; c++)
  {
    for (d = 0 ; d < N - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
    return array;
}

void printArray(int arr[], int size)
{
    int i;

    printf(" Sorted Array elements are: ");
    for(i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
}
