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
		execl("son", "son", NULL);
	} else {
		printf("\n Forked child %d\n", pid);
	}
	
	while((wait_pid=wait(&status)) && wait_pid!=-1) {
		if (wait_pid != -1) {
			printf("\n Wait child PID:%d, Current PID:%d\n", wait_pid, getpid());
		}
	}
	exit(0);

}
