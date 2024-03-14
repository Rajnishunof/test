#include<stdio.h>
#include<unistd.h>
int main()
{
    __pid_t childPid;

    childPid=fork();
    if(childPid==-1)
    {
        printf("Failed to create process");
        return 1;
    }

    if(childPid==0)
    {
        printf("child %ld\n",(long)getppid());
    
    }
    else
    {
    printf("parent %ld\n",(long)getpid());

    }


}