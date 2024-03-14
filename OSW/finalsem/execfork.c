
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
#include<sys/wait.h>
int main()
{
    int status=0;
    __pid_t pid;
   pid=fork();
   if(pid==-1)
   {
    exit(-1);
   }
   if(pid==0)
   {
    printf("\nBefore execution. pid= %d\n",getpid());
    execl("/home/student/2141011103/OSW/finalsem/p2.out","arg1","arg2",NULL);
    printf("Line is not printed");

   }
   else{
    printf("parent executing before wait()\n");
    pid=wait(&status);//wait for the child to terminate 
   
    printf("wait() in parent done\nparent id =%d\n",getpid());
    printf("pid returned is %d \n",pid);
    printf("Status is %d\n",status);


   }
}