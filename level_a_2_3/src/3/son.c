#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void main() {
	pid_t pid = getpid();
	pid_t ppid = getppid();

	printf("\n SON PARAM: pid=%i, ppid=%i\n", pid, ppid);
	printf("\n SON PARAM: son is end\n");
}
