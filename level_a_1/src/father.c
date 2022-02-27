#include<stdio.h>
#include<unistd.h> 
#include<sys/wait.h>
#include<stdlib.h>

void main(){

	int pid;
	int ppid;
	int status;
	pid = getpid();
	ppid = getppid();
	
	printf("\n\n FATHER PARAM: pid=%i ppid=%i\n",pid,ppid);

	if (fork()==0) {
	  execl("son","son",NULL);
	}
	//system ("ps xf");
	system("ps xf > father_logs.txt");
	system("ps > father_logs_simple.txt");
	wait(&status);
}
