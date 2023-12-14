#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void)
{
	pid_t child_pid;
	int status;
	int i;
	char *agrs[] = {"ls", "-l", "/tmp", NULL};

	for (i = 0; i < 5; i++)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error: ");
			return(1);
		}
	}

	if (child_pid == 0)
	{
		execve("/usr/bin/ls", agrs, NULL);
		perror("Error: ");
		exit(1);
	}
	else
	{
		wait(&status);
	}
}
