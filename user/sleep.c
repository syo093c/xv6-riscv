#include "kernel/types.h"
#include "user/user.h"

void print_help()
{
    printf("sleep: \n");
    printf("Input sleep time.\n");
}
int main(int argc, char *argv[])
{
    if (argc<2){
        print_help();
        exit(1);
    }
    sleep(atoi(argv[1]));
    exit(0);
}