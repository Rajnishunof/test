#define SEM_NAME1 "/sem_1"
#define SEM_NAME2 "/sem_2"

#include<semaphore.h>
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<sys/stat.h>




int main()
{
    sem_t *sem1=NULL;
    sem_t *sem2=NULL;
    sem1=sem_open(SEM_NAME1,O_CREAT | O_EXCL,S_IRUSR | S_IWUSR,0);
    sem2=sem_open(SEM_NAME2,O_CREAT | O_EXCL,S_IRUSR | S_IWUSR,0);

    if(fork()==0)
    {
        printf("1\n");
        sem_post(sem1);
        sem_wait(sem2);
        printf("3\n");
        sem_post(sem1);


        sem_close(sem1);
        sem_close(sem2);
    }
    else{
        sem_wait(sem1);
        printf("2\n");
        sem_post(sem2);
        sem_wait(sem1);
        printf("4\n");

        wait(NULL);

        sem_close(sem1);
        sem_close(sem2);

        sem_unlink(SEM_NAME1);
        sem_unlink(SEM_NAME2);
    }
    return 0;
}