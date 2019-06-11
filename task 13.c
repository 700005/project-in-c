#include<stdio.h>
int main()
{
    int arr[5];
    int i = 0, max = 0,min=0;

       for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }    

    max = arr[0];

    for(i = 0; i < 5; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    min=arr[0];
    for(i = 0; i < 5; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Max = %d", max);
printf("min = %d", min);
    return 0;
}
