#include <stdio.h>
#include <unistd.h>
int main()
{
    printf("parent %ld\n", (long)getpid());
    for (int i = 0; i < 3; i++)
    {
        int pid;
        pid = fork();

        if (pid == -1)
        {
            printf("Failed to create process");
            return 1;
        }

        else if (pid == 0)
        {
            printf("child %d from parents %d\n", getpid(),getppid());
           
        }
       
    }
    return 0;
}