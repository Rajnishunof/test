
#include <stdio.h>
#include <unistd.h>
int main()
{
    __pid_t pid;
    int i = 5;
    pid = vfork();
    i = i + 1;
    if (pid == 0) // PARENT HAS TO WAIT IN CASE OF VFORK
    {
        printf("%d\n", i);
        _exit(0);
    }
    else
    {
        printf("%d\n", i);
    }
    return 0;
}