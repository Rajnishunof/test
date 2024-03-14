#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
    __pid_t childPid;

    childPid=fork();
    

    if(childPid==0)
    {
        printf("Inside Child\n");
    
    }
    else
    {
        // wait(NULL);
        printf("In parent\n");
         
         printf("SPAM\n");
         wait(NULL);

    }


}