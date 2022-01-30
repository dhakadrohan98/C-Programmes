void printArray(int * arr, int size)
{
    int i;

    printf("Array elements are: ");
    for(i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
}

int main()
{
    int arr[5];

    printArray(arr, 5);    // Pass array directly to function printArray

    return 0;
}
