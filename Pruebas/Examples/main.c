#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *linea, *tokens, *tokens2[] = {"/bin/ls", "-l", "/home/vagrant", NULL};
	size_t lenght = 12;
	int buffer = NULL, tokencont = 0, fdexec;
	pid_t ejecufork;

	linea = malloc(sizeof(char) *lenght);
		if (linea == NULL)
	{
		free(linea);
		exit(1);
	}
	printf("$");
	buffer = getline(&linea, &lenght, stdin);
	if (buffer == -1)
	{
		printf("Error getting data from command line.\n");
	}
		else
		{
			printf("%s", linea);
		}
	tokens = strtok(linea, " ");
	while (tokens != NULL)
	{
		printf("%s\n", tokens);
		tokens = strtok(NULL, " ");
	}
	printf("-------------------------------");
	ejecufork = fork();
	if (ejecufork == 0)
		execv(tokens2[0], tokens2, NULL);
	wait(NULL);
	printf("Correctly executed the %s command", tokens2[0]);
}
