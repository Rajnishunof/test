#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    printf("\ni am a main process(P1) pid = %d \n",getpid());
    execl("/home/student/2141011103/OSW/finalsem/p2.out","arg1","arg2","arg3",NULL);
    printf("This line will not be printed...\n");
    return 0;
}