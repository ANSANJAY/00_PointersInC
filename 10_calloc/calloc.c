#include<stdio.h>
#include<stdlib.h>

int main()
{
    //contigous allocation
    int *ptr;
    ptr = calloc(5,sizeof(int));
    if(ptr != NULL)
    printf("value allocated from ptr %p\n",ptr);
    return 0;
}