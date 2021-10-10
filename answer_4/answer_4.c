#include <stdio.h>
#include <time.h>
#include<stdlib.h>
void bubbleSort(long long int n, long long int arr[])
{
    int counter = 1;
    while (counter < n)
    {
        for (int j = 0; j < n - counter; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        counter++;
    }
    printf("Sorted Array through bubble sort is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%lld ", arr[i]);
    }
    return;
}

void selectionSort(long long int n, long long int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("Sorted array is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%lld ", arr[i]);
    }
    return;
}
int main()
{
    long long int n, arr[50];
    int option1;
    printf("Enter no. of elements\n");
        scanf("%d", &n);
        printf("Enter the elements\n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
    printf("Press 1 for bubble sort\nPress 2 for selection sort\n");
    scanf("%d", &option1);

    if (option1 == 1)
    {
        clock_t start,end;
    long int t;
    start=clock();
     bubbleSort(n, arr);
    end=clock();
    t=end-start;
    printf("\nTotal time elapsed for Bubble sort: %f\n",(double)t/(double)CLOCKS_PER_SEC);
       
    }

    else if (option1 == 2)
    {   clock_t start2,end2;
    long int t2;
    start2=clock();
   selectionSort(n, arr);
    end2=clock();
    t2=end2-start2;
     printf("\nTotal time elapsed for Selection sort: %f\n",(double)t2/(double)CLOCKS_PER_SEC);
        
    }

    return 0;
}
