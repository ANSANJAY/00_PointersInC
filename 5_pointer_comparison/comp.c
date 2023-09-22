#include <stdio.h>

int main ()
{
    int arr[] = {5,6,7,8};
    int *p = &arr[2];
    int *q = &arr[0];
    printf("difference is %d\n",q-p);
 printf("difference is %d\n",p-q);
    return 0;
}