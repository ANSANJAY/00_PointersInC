#include <stdio.h>

int main()
{

    int a =10;
    int *ptr = &a;
    printf("%d\n",a);
    printf("%p\n",&a);
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
    printf("%p\n",&ptr);

}