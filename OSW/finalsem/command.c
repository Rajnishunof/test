// ps -al command to check which process is currntly running
// correct process tree
//pstree -p processid when we want to know which process has what child visulizing the whole system tree for whole process
// pstree grep
// FAN PROCESS->EK PARENT KA SIRF CHILD KO HI PRINT KAREGA
// CHAIN PROCESS-
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    for(int i=0;i<3;i++)
    {
        fork();
        
    }
    printf("process ID : %d ,Parent ID: %d\n",getpid(),getppid());
    getchar();
}

