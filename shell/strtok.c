#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "This is a separated word by space";
	char delim[5] = " ";
	char *trunks;

	trunks = strtok(str, delim);
	printf("%s\n", trunks);

	trunks = strtok(NULL, delim);
	printf("%s\n", trunks);

	trunks = strtok(NULL, delim);
	printf("%s\n", trunks);
	
	trunks = strtok(NULL, delim);
	printf("%s\n", trunks);

	trunks = strtok(NULL, delim);
	printf("%s\n", trunks);

	trunks = strtok(NULL, delim);
	printf("%s\n", trunks);

	trunks = strtok(NULL, delim);
	printf("%s\n", trunks);

	trunks = strtok(NULL, delim);
	if (trunks == NULL)
		printf("Last part is null\n");
	else
		printf("It is not null\n");

	return(0);
}
