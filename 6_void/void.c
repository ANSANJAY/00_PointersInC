#include <stdio.h>

int main()
{
    int a =10;
    void * ptr = &a;
    printf("%d\n",*(int *)(ptr));
    // need to type cast before de -refrencing
    
    return 0;
}