#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
int main()
{
    
    getchar();
    printf("Process 2 Terminated");
    
    return 0;
}




// student@D001-38:~/2141011103/OSW/finalsem$ gcc terminate2process1.c
// student@D001-38:~/2141011103/OSW/finalsem$ ./a.out
// Terminated
// student@D001-38:~/2141011103/OSW/finalsem$ 


// student@D001-38:~/2141011103/OSW/finalsem$ gcc terminate2process2.c
// student@D001-38:~/2141011103/OSW/finalsem$ ./a.out
// Terminated
// student@D001-38:~/2141011103/OSW/finalsem$


// student@D001-38:~/2141011103/OSW/finalsem$ ps -al
// F S   UID     PID    PPID  C PRI  NI ADDR SZ WCHAN  TTY          TIME CMD
// 4 S  1001     995     993  2  80   0 - 129032 ep_pol tty2    00:01:20 Xorg
// 0 S  1001    1169     993  0  80   0 - 47120 do_sys tty2     00:00:00 gnome-sess
// 0 S  1001    8585    8518  0  80   0 -   624 wait_w pts/1    00:00:00 a.out
// 0 S  1001    8667    8588  0  80   0 -   624 wait_w pts/2    00:00:00 a.out
// 0 R  1001    8668    8653  0  80   0 -  2944 -      pts/3    00:00:00 ps
// student@D001-38:~/2141011103/OSW/finalsem$ kill -15 8585 8667
