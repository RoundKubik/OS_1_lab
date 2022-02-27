#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>

void main()
{	
	pid_t pid = getpid();
	pid_t ppid = getppid();
	printf("\n SON PARAM: pid=%i ppid=%i \n", pid, ppid);


	sleep(12);

	pid_t new_ppid = getppid();
    if(new_ppid != ppid) {
		int id  = getppid();
		printf("\n ppid:%i\n", id);
		printf("\n SON PARAM: FATHER IS DEAD\n");
		printf("\n SON PARAM: pid=%i ppid=%i \n", pid, new_ppid);
    }
    else{
        printf("\n SONPARAM: FATHER IS ALIVE\n");
		printf("\n SON PARAM: pid=%i ppid=%i \n", pid, ppid);
    }
	system("ps > not_wait.txt");	
	exit(0);
	
}


