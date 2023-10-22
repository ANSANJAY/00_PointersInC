#include<stdlib.h>
#include<stdio.h>

int main(){
int *ptr;
int *ptr1;
int *ptr2;
ptr = malloc(5*sizeof(int));// initial size was 5
if(ptr != NULL)
printf("memory reallocated from ptr %p\n",ptr);

ptr1 = realloc(ptr,(2*sizeof(int)));//size reduced to 2
if(ptr1 != NULL)
printf("memory reallocated from ptr to ptr1 %p\n",ptr1);

ptr2 = realloc(ptr,7*(sizeof(int)));
if(ptr2 != NULL)
printf("memory reallocated from ptr to ptr2 %p\n",ptr2);

return 0;
}