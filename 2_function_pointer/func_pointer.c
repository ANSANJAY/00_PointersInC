//Write a C program that includes a function that returns a pointer. The function should have the following prototype:


#include<stdio.h>

int * find_larger(int *,int *);
int main()
{
    int a , b;
    int *ptr;
    printf("Insert the value of a and b\n");
    scanf("%d %d",&a ,&b);
    ptr = find_larger(&a,&b);
    printf("larger value is %d\n",*ptr);

    return 0;
}

int * find_larger(int *a, int *b)
{
    if( *a < *b)
    return b;
    else 
    return a;
}