
#include <stdio.h>
#include <unistd.h>
int main()
{
    __pid_t pid;
    int n = 10;
    pid = fork();
   
    if (pid == 0) 
    {
        printf("child");
        n=20;
        printf("%d\n",n);
    }
    else
    {
        wait(NULL);
        printf("parent");
        printf("%d\n",n);
    }
    return 0;
}