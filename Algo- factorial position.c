#include<stdio.h>

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{
    int n = 6;
    long int fact = factorial (n);
    printf("factorial is : %d", fact);
    return 0;
}
