#include<stdio.h>
#include<unistd.h>
int main()
{
    if(vfork()==0)//PARENT HAS TO WAIT IN CASE OF VFORK
    {
        printf("1\n");
        _exit(0);
    }
    else
    printf("2\n");

 printf("3\n");
 return 0;

    
}