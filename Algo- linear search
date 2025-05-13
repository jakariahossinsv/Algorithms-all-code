#include<stdio.h>
int linearsearch (int arr[],int l,int key)
{
    int i;
    for(i=0;i<l;i++)
    {
        if(key ==arr[i])
            return i;
    }
    return -1;
}
int main ()
{
    int arr[]={10,20,30,40,50};
    int key =30;
    int l = sizeof (arr)/ sizeof (arr[0]);
    int result = linearsearch (arr,l,key);
    if (result== -1)
        printf("element is not found \n");
    else
        printf("element found at index:%d",result);
    return 0;
}
