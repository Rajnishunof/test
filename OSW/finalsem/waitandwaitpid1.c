#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
#include<sys/wait.h>
int main()
{
   __pid_t pid;
   pid=fork();
   if(pid==-1)
   {
    exit(-1);
   }
   if(pid==0)
   {
    printf("\nchild executing first it pid= %d\n",getpid());
    sleep(20);
    printf("child pid = %d\n",getpid());
    exit(1);

   }
   else{
    printf("parent executing before wait()\n");
    pid=wait(NULL);//wait for the child to terminate 
    sleep(5);
    printf("wait() in parent done\nparent id =%d\n",getpid());
    printf("pid returned is %d \n",pid);


   }
   
    return 0;
}
// WNOHANG IS OPTION THAT MEAN IF PROCESS HAS ALSO ENDED THEN IT WILL RETURN STATUS 0
