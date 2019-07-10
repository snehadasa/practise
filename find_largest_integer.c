#include <stdio.h>

int find_largest(int arr[])
{
    int i, largest;

    if (n == 0)
    {
        return (-1);
    }
    for (i = 0; i < n; i++)
    {
        if ( largest < arr[i])
        {
            largest = arr[i];
        }
    }
    return (largest);
}

int main()
{
    int arr[] = {5, 6, 200, 56, 98, 109, 255, 20000, 108, 771};
    int largest = find_largest(arr, 10);

    printf("largest integer %d\n", largest);

    return 0;
}
