#include <stdio.h>
#include <unistd.h>

int main(void) 
{
	pid_t id;

	id = getppid();
	printf("Parent PID is = %u\n", id);
	return(0);
}
