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
	system("ps xf > son_logs.txt");                                                                             
    system("ps > son_logs_simple.txt"); 	
	sleep(5);
}
