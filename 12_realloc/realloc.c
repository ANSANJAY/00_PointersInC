#include<stdlib.h>
#include<stdio.h>

int main(){
int *ptr;
int *ptr1;
ptr = malloc(5*sizeof(int));
if(ptr != NULL)
printf("memory reallocated from ptr %p\n",ptr);

ptr1 = realloc(ptr,(2*sizeof(int)));
if(ptr1 != NULL)
printf("memory reallocated from ptr1 %p\n",ptr1);

return 0;
}