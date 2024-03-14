#include<stdio.h>
int main()
{
    if(fork()==0)
    {
        printf("1\n");
    }
    else
    printf("2\n");

 printf("3\n");
 return 0;

    
}