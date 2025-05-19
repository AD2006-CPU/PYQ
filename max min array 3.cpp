#include <stdio.h>
int main() 
{
    int arr[3];
    int i, max, min;
    printf("Input the number of elements to be stored in the array: 3\n");
    printf("Input 3 elements in the array:\n");
    printf("element - 0 : ");
    scanf("%d", &arr[0]);
    printf("element - 1 : ");
    scanf("%d", &arr[1]);
    printf("element - 2 : ");
    scanf("%d", &arr[2]);

    max = min = arr[0];

    for(i = 1; i < 3; i++) 
	{
    if(arr[i] > max)
    max = arr[i];
    if(arr[i] < min)
    min = arr[i];
    }
    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);

    return 0;
}

