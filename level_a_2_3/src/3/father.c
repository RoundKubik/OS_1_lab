#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
	pid_t pid = getpid();
	pid_t ppid = getppid();

	printf("\n FATHER PARAM: pid=%i, ppid=%i\n", pid, ppid);

	if ((pid = fork()) == 0) {
		execl("son", "son", NULL);
	} else {
		printf("\n FATHER PARAM: Forked child %i\n", pid);
	}
	sleep(10);
	system("ps > son_end_log.txt");
	exit(0);
}
