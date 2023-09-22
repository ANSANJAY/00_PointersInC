#include <stdio.h>

int main()
{
    int a = 10 ;
    int *ptr = &a;

    printf("ptr +1 : %p\n",ptr+1);// will print 1 int away
    printf("ptr +2 : %p\n",ptr+2);
    printf("difference : %d\n",(ptr+2)-(ptr+1)); // will calculate the number of int items between them
    return 0;
}