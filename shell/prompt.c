#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t n = 0;
	char *buf = NULL;

	printf("$ ");
	getline(&buf, &n, stdin);
	printf("%s\n", buf);
	printf("Buffer size: %ld\n", n);

	free(buf);
	return(0);
}
