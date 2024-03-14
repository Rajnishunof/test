#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
int main()
{
    kill(getpid(),SIGTERM);
    getchar();
    
    
    return 0;
}

// student@D001-38:~$ ps -al
// F S   UID     PID    PPID  C PRI  NI ADDR SZ WCHAN  TTY          TIME CMD
// 4 S  1001     995     993  2  80   0 - 127267 ep_pol tty2    00:01:03 Xorg
// 0 S  1001    1169     993  0  80   0 - 47120 do_sys tty2     00:00:00 gnome-sess
// 0 S  1001    7807    7787  0  80   0 -   625 wait_w pts/0    00:00:00 processKil
// 0 R  1001    7839    7646  0  80   0 -  2944 -      pts/1    00:00:00 ps
// student@D001-38:~$ kill 7807
// student@D001-38:~$ ps -al
// F S   UID     PID    PPID  C PRI  NI ADDR SZ WCHAN  TTY          TIME CMD
// 4 S  1001     995     993  2  80   0 - 127251 ep_pol tty2    00:01:05 Xorg
// 0 S  1001    1169     993  0  80   0 - 47120 do_sys tty2     00:00:00 gnome-sess
// 0 S  1001    7880    7787  0  80   0 -   625 wait_w pts/0    00:00:00 processKil
// 0 R  1001    7912    7646  0  80   0 -  2944 -      pts/1    00:00:00 ps
// student@D001-38:~$ kill -15 7880
