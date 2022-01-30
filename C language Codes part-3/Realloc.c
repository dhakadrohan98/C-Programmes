#include <stdio.h>
#include <stdlib.h>

int main()
{

	// This pointer will hold the
	// base address of the block created
	int* ptr;
	int n1,n2, i, sum = 0;

	// Get the number of elements for the array
	//n = 5;
	printf("Enter number of elements for calloc:");
	scanf("%d",&n1);

	// Dynamically allocate memory using calloc()
	ptr = (int*)calloc(n1, sizeof(int));

	// Check if the memory has been successfully
	// allocated by malloc or not
	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {

		// Memory has been successfully allocated
		printf("Memory successfully allocated using calloc.\n");

		// Get the elements of the array
		for (i = 0; i < n1; ++i) {
			scanf("%d",&ptr[i]);
		}

		// Print the elements of the array
		printf("The elements of the array are: ");
		for (i = 0; i < n1; ++i) {
			printf("%d, ", ptr[i]);
		}

		// Get the new size for the array

		printf("\n\nEnter the new size of the array:");
		scanf("%d",&n2);

		// Dynamically re-allocate memory using realloc()
		ptr = realloc(ptr, n2 * sizeof(int));

		// Memory has been successfully allocated
		printf("Memory successfully re-allocated using realloc.\n");

		// Get the new elements of the array
		for (i = n1; i < n2; ++i) {
			scanf("%d",&ptr[i]);
		}

		// Print the elements of the array
		printf("The elements of the array are: ");
		for (i = 0; i < n2; ++i) {
			printf("%d, ", ptr[i]);
		}

		free(ptr);
	}

	return 0;
}
