#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

#define MAX_TOKENS 1024

int main(void)
{
	size_t buf_size = 0;
	char *buf = NULL;
	char *token;
	int i = 0;
	char **array;
	pid_t child_pid;
	int status;

	while (1)
	{
		write(1, "#cisfun$ ", 9);
		if (getline(&buf, &buf_size, stdin) == -1)
		{
			perror("Error reading input");
			exit(EXIT_FAILURE);
		}
		token = strtok(buf, "\t\n");
		array = malloc(sizeof(char *) * 1024);

		while (token)
		{
			if (i >= MAX_TOKENS - 1)
			{
				fprintf(stderr, "Too many tokens, maximum allowed: %d\n", MAX_TOKENS - 1);
				free(buf);
				i = 0;
				free(array);
				continue;
			}
			array[i] = token;
			token = strtok(NULL, "\t\n");
			i++;
		}
		array[i] = NULL;
		child_pid = fork();

		if (child_pid == 0)
		{
			if (execve(array[0], array, NULL) == -1)
			{
				perror("Error: ");
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			wait(&status);
		}
		free(buf);
		i = 0;
		free(array);
	}
}
