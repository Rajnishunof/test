#include <stdio.h>
#include <unistd.h>
int main()
{
    for (int i = 0; i < 3; i++)
    {
        int pid;
        pid = fork();

        if (pid > 0)
        {
            printf("parent %ld\n", (long)getpid());
            break;
        }
        else
        {
            printf("child %ld\n", (long)getpid());
        }
    }
    getchar();
        return 0;
    
}