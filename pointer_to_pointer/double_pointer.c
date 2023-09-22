#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr = &a;
    int **dptr = &ptr;
    printf("Value of a %d  \n",a);
    printf("Address of a %p  \n",&a);
    printf("address held by ptr %p  \n",ptr);
    printf("value at address pointed by the ptr %d  \n",*ptr);
    printf("address of the ptr is %p\n",&ptr);
    printf("address held by dptr %p  \n",dptr);
    printf("value ataddress pointed by the dptr %p  \n",*dptr);
    printf("value at address pointed by the dptr %p  \n",*dptr);
    printf("value at address pointed by the dptr %d \n",**dptr);
    printf("address of the ptr is %p\n",&dptr); 


    return 0;
}