#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
    int i;
   printf("I am a P2 called by exelc().My pid is %d",getpid());
   printf("\n");
   for(i=0;i<argc;i++)
   {
    printf("\nargv[%d]=(%s)\n",i,argv[i]);
   }
   return 0;
}