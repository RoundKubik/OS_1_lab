#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void main()
{	
	int pid;
	int ppid;
	
	pid = getpid();
	ppid = getppid();
	
	printf("\n SON PARAM: pid=%i ppid=%i \n", pid, ppid);
	sleep(10);
	system("ps > son_log.txt");
	exit(0);
}

