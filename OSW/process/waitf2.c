#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
    pid_t childPid, value;
    int sum;

    childPid = fork();
    if (childPid > 0)
    {
        value = wait(NULL);
        printf("parent %d \n", getpid());
        printf("new child %d\n", value);
    }
    else
    {
        sum = 20 + 30;
        printf("%d\n", sum);
        printf("child %d\n", getpid);
}