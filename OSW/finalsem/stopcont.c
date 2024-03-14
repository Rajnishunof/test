#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
int main()
{
    
   for(int i=0;i<50;i++)
   {
    printf("i= %d\n",i);
    sleep(1);
   }
    
    return 0;
}

// student@D001-38:~$ ps -al
// F S   UID     PID    PPID  C PRI  NI ADDR SZ WCHAN  TTY          TIME CMD
// 4 S  1001     995     993  2  80   0 - 127284 ep_pol tty2    00:01:00 Xorg
// 0 S  1001    1169     993  0  80   0 - 47120 do_sys tty2     00:00:00 gnome-sess
// 0 S  1001    7621    7601  0  80   0 -   625 hrtime pts/0    00:00:00 stopcont
// 0 R  1001    7669    7646  0  80   0 -  2944 -      pts/1    00:00:00 ps
// student@D001-38:~$ kill -19 7621
// student@D001-38:~$ kill -18 7621
// student@D001-38:~$ ^C
