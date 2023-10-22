#include<stdio.h>
#include<stdlib.h>

int main()
{

    int *ptr;
    ptr = malloc(5*(sizeof(int)));
    if(!ptr)
    perror("malloc");
    printf("memory allocated starting from ptr %p\n",ptr);
}