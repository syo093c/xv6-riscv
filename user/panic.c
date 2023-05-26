#include "kernel/types.h"
#include "user/user.h"

int main()
{
    int *ptr = (int*)100000;
    int value = *ptr;
    printf("%d",value);
    return 0;
}