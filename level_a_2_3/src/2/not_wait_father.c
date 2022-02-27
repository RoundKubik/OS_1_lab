#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<stdlib.h>

void main() {
	pid_t wait_pid;
	
	pid_t pid = getpid();
	pid_t ppid = getppid();
	int status;

	printf("\n FATHER PARAM: pid=%i ppid=%i \n", pid, ppid);

	if ((pid = fork()) == 0) {
		execl("not_wait_son", "not_wait_son", NULL);
	} else {
		printf("\n FATHER PARAM: Forked child %d\n", pid);
	}
	
	sleep(2);
    printf("\n FATHER PARAM: end\n");
	system("ps > not_wait.txt");
}

