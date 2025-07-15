#include<stdio.h>

int main()
{
    int arr[]={22,45,67,33,45,67,12};
    int l =sizeof(arr)/sizeof(arr[0]);
    int minimum = minofArray (arr,l);
    printf("Minimum value is: %d",minimum);
    return 0;
}
int minofArray(int arr[],int l)
{
    int min = arr[0];
    for (int i = 1; i<l; i++)
    {
        if(min>arr[i])
        {
            min = arr[i];

        }
    }
    return min;
}


