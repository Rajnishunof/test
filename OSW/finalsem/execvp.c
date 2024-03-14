#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    printf("Main program\n");
    char *args[]={"arg1","arg2","arg3",NULL};
    execvp("test2.out",args);
    printf("this line will not be printed");
}

// To add path in bashrc first type(open any editor vim,gedit,nano TO do this type): "vim ~/.bashrc"
// then in vim type :Paste the folder path in which file is there :
// "export PATH={path of folede} remove slash then colon :$PATH"
// eg:export PATH=/home/student/2141011103/OSW/finalsem:$PATH
// then CTRL+C to exit from terminal
// then type this in terminal "source ~/.bashrc"
// then run your code